// increment and decrement
// by YUG GANDHI
int main()
{
    int y,p,c;
    y=10;
    p=20;
    printf("before execution y : %d",y);
    printf("\nbefore execution p : %d",p);
    c = ++y + y++ + --y + ++p - --p - --p;
    printf("\nafter execution y : %d",y);
    printf("\nafter execution p : %d",p);
    return 0;

}
