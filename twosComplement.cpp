/*
char is signed be default
the max value for char is 127
if increment it, it will turn -128, the min
Why?
*/
int main()
{
char value=127;

cout<<(int)value<<endl;
value++;
cout<<(int)value<<endl;
return 0;
}

/*
3-bit system:
The max value for unsigned number is: 111=1+2+4;(2 to the power of 3-1)
11111111=2 pow 8-1=255

For signed value:
Keep 0 for the most significant digit
(0)()()

000=0;
001=1;
010=2'
011=3;
100=-0;
101=-1
110=-2
111=-3
the first digit just represent the negative or positive

001 (1)+
101 (-1)=
110 (-2) wrong answer

One's Complement is not used much.
111 is the most negative value
000=0;
001=1;
010=2'
011=3;
100=-3;
101=-2
110=-1
111=-0

001 (1)+
110 (-1)=
111 (-0=0) right answer

0011 (3) +
+
0101 (-2) =
1000 wrong answer
add overflow bit to right:
000+1=001
001 is the right answer 1

Two's complement
000=0;
001=1;
010=2'
011=3;
100=-4;
101=-3
110=-2
111=-1

0010 (2)+
0110 (-2) =
1000(overone flowing)
-> discard overflow bit-> 000(right answer), just ignore it

Ex:
010(2) +
101(-3) =
111 (-1) right answer
*/
