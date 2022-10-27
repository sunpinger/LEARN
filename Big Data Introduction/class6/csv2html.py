seg1 = '''
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
<h2 align=center>二十报告中的高频词汇</h2>
<table border='1' align="center" width="70%">
<tr bgcolor='orange'>\n'''
seg2 = "</tr>\n"
seg3 = "</table>\n</body>\n</html>"

def fill_data(locls):
	seg = '\
	<tr><td align="center">{}</td>\
	<td align="center">{}</td>\
	<td align="center">{}</td>\
	<td align="center">{}</td></tr>\n'.format(*locls)
	return seg

fr = open("final_result.csv","r",encoding='utf-8')
ls = []
for line in fr:
	line = line.replace("\n","")
	ls.append(line.split(","))
fr.close()

fw = open("twenty.html","w",encoding='utf-8')
fw.write(seg1)
fw.write('\
	<th width="25%">{}</th>\n\
	<th width="25%">{}</th>\n\
	<th width="25%">{}</th>\n\
	<th width="25%">{}</th>\n'.format(*ls[0]))
fw.write(seg2)
for i in range(1,len(ls)):
	fw.write(fill_data(ls[i]))
fw.write(seg3)
fw.close()