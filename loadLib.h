#ifndef LOADLIB_H
#define LOADLIB_H

#include <iostream>

<<<<<<< HEAD
// Определяем условную компиляцию для разных ОС
#include <windows.h>
=======

#include <dlfcn.h> // Для Linux используем dlfcn.h
>>>>>>> no-windows


class LoadLib {
public:
    LoadLib(const char* libName);
    ~LoadLib();

    template<typename FuncType>
    FuncType loadFunction(const char* funcName);

private:

<<<<<<< HEAD
    HINSTANCE hLib;  // Тип для Windows
=======
    void* hLib;      // Тип для Linux
>>>>>>> no-windows

};

template<typename FuncType>
FuncType LoadLib::loadFunction(const char* funcName) {
    if (!hLib) return nullptr;

<<<<<<< HEAD
        // Загрузка функции для Windows
        FuncType func = reinterpret_cast<FuncType>(GetProcAddress(hLib, funcName));
=======

        // Загрузка функции для Linux
    FuncType func = reinterpret_cast<FuncType>(dlsym(hLib, funcName));
>>>>>>> no-windows


    if (!func) {
        std::cerr << "Cannot load function: " << funcName << std::endl;
    }
    return func;
}

#endif // LOADLIB_H
