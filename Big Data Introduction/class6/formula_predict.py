# A simple one-layer neural network built with Pytorch

import torch
from torch import nn
from torch import optim
import torch.nn.functional as F

def error(pred, y):
    return abs(pred-y).mean()

x = torch.tensor([
    [90, 10],
    [80, 5],
    [85, 0],
    [78, 10],
    [75, 5],
    [66, 15],
    [52, 5]]
)
y = torch.tensor([
    [100],
    [92],
    [92],
    [93],
    [89],
    [89],
    [75]]
)
x = x.float()/100
y = y.float()/100

lr = 0.1
epochs = 10

loss_func = F.mse_loss

model = nn.Sequential(
    nn.Linear(2, 1)
)

opt = optim.SGD(model.parameters(), lr=lr)
    
for _ in range(epochs):
    model.train()
    pred = model(x)
    loss = loss_func(pred, y)
    loss.backward()
    with torch.no_grad():
        opt.step()
        opt.zero_grad()

print("正确结果: \n", y)
print("预测结果: \n", pred)
print("\n误差: ", error(pred, y).item())

test = torch.tensor([0.83, 0.1])
print(model(test).item())