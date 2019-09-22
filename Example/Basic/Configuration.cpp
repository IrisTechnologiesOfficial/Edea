#include <Basic/Configuration.hpp>

#if defined(EdeaWindows)
void Foo()
{
    //Windows-only specific function
}
#elif defined(EdeaLinux)
void Foo()
{
    //Linux-only specific function
}
#endif

int main(const int argc, const char ** argv)
{
    Foo();
    return 0;
}