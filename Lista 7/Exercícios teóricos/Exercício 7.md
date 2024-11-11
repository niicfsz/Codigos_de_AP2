7 – Seja o seguinte trecho de programa:
```C
int i=3, j=5;
int *p, *q;
p = &i;
q = &j;
```
Qual o valor das seguintes expressões?
```
a) p == &i;
b) *p - *q; 
c)*&p; 
d)3 * - *p/(*q)+7;
```
a) TRUE

b) 3 - 5 = -2

c) *&p = p = &i

d) 3 * - *p/(*q)+7 =  3 * (-3)/5+7 = -3/4
