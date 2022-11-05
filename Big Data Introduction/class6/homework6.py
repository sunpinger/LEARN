import csv


class Count(object):
    def __init__(self, file_names, result_name):
        self.file_names = file_names
        self.result_name = result_name

    def count_words(self):
        result = {}
        words = []
        punct = ['“', '”', '。', '；', '：', '?', '！', '—', '，', '、', '（', '）']
        for name in self.file_names:
            with open(name, 'rt', encoding='utf-8') as f:
                for line in f:
                    for c in punct:
                        line = line.replace(c, "")
                    for word in line.split():
                        if word not in words:
                            words.append(word)
                            result[word] = 1
                        else:
                            result[word] += 1

        result = list(reversed(sorted(result.items(), key=lambda s: s[1])))
        res = []
        length = int(len(result) / 2)
        for i in range(0, length):
            row = [result[2 * i][0], result[2 * i][1], result[2 * i + 1][0], result[2 * i + 1][1]]
            res.append(row)
        headers = ['词汇', '出现次数', '词汇', '出现次数']
        with open(self.result_name, 'w', encoding='utf-8', newline='') as f:
            f_csv = csv.writer(f)  # 创建csv文件的字典写对象
            f_csv.writerow(headers)  # 写入二维数据的第一行
            f_csv.writerows(res)  # 利用字典key-value对应关系，写入二维数据的剩余行


if __name__ == "__main__":
    c1 = Count(['shanxi_cut.txt', 'sichuan_cut.txt', 'gov_cut.txt'], 'final_result.csv')
    c1.count_words()
