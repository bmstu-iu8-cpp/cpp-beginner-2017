### Настройка travis-ci

Текущее состояние проекта: [![Build Status](https://travis-ci.org/drewxa/bmstu-programming-languages.svg?branch=travis-template)](https://travis-ci.org/drewxa/bmstu-programming-languages)

1. Скопируйте в свой репозиторий файл [.travis.yml](.travis.yml)
1. Скопируйте в свой репозиторий файл [CMakeLists.txt](CMakeLists.txt)
1. Удалите строку `hello_world.cpp` в файле [CMakeLists.txt](CMakeLists.txt)
1. Добавьте названия ваших .cpp файлов в секцию `add_executable`
1. Необходимо разрешить доступ к вашему github репозиторию системе [travis-ci](https://travis-ci.org)

### Пример
Пусть у вас в проекте есть несколько файлов: `stack.cpp`, `stack.h`, `main.cpp`. Содержимое **CMakeLists.txt** должно быть следующим:

```
cmake_minimum_required (VERSION 2.8)

include_directories(SYSTEM
    ./
)

# enum your files
add_executable(executable
  main.cpp
	stack.cpp
)

target_link_libraries(executable)
```
