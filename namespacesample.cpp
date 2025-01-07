namespace A 
{
#if USE_INLINE_B
 inline
#endif 

namespace B
{
    int foo(bool){return 1;}
}
int foo(bool){return 2;}
}

int main()
{
    return A::foo(true);
}