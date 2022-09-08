import sys

sys.path.append("..\\Dllsx64")
import A
import B
import C

a = A.D()
b = B.B()
c = C.D()
listint = A.VectorInt()
# 测试模板
a.inVector(listint)
a.outVector([])
# c.func0(c.func1())
# print(c.func1())
# 测试不同模块同名类
temp0 = b.inD(a)
temp1 = b.inD(c)
temp2 = b.outD()
print("sdaf")