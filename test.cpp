
#include <iostream>

#include <dlfcn.h>

int main(int argc, char *argv[]) {

    auto handle = ::dlopen("/home/alex/projects/fe/ffi/libfoo.so", RTLD_LAZY);
    auto sym_init = ::dlsym(handle, "foo_init");
    auto fun_init = reinterpret_cast<void(*)(int, char*[])>(sym_init);
    fun_init(argc, argv);

    auto sym = ::dlsym(handle, "foo");
    auto fun = reinterpret_cast<int(*)(int)>(sym);
    std::cout << fun(42) << std::endl;
    std::cout << fun(142) << std::endl;
    std::cout << fun(1024) << std::endl;

    return 0;
}

