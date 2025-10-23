
## 📋 **Configuração Completa para VS Code no Ubuntu**
--  g++ <nome da pasta do projeto>/Main.cpp  -o build/random
### 1. **Instalar Dependências Necessárias**
```bash
sudo apt update
sudo apt install build-essential gdb g++ make cmake
```

### 2. **Estrutura Recomendada do Projeto**
```
meu_projeto/
├── .vscode/
│   ├── tasks.json
│   ├── launch.json
│   └── c_cpp_properties.json
├── include/
│   └── GradeBook.h
├── src/
│   ├── GradeBook.cpp
│   └── main.cpp
└── Makefile (opcional)
```

### 3. **Configurar .vscode/tasks.json**
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++ build active project",
            "command": "/usr/bin/g++",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "-I${workspaceFolder}/include",
                "${workspaceFolder}/src/*.cpp",
                "-o",
                "${workspaceFolder}/build/programa"
            ],
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Compilador: /usr/bin/g++"
        }
    ]
}
```

### 4. **Configurar .vscode/launch.json**
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "C++ Debug",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/programa",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Habilitar pretty-printing para gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++ build active project"
        }
    ]
}
```

### 5. **Configurar .vscode/c_cpp_properties.json**
```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/include",
                "${workspaceFolder}/src"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/g++",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```

## 🛠️ **Método 1: Compilação Manual (Recomendado para Iniciantes)**

### **Criar Makefile simples:**
```makefile
CXX = g++
CXXFLAGS = -Wall -g -Iinclude
SRCDIR = src
BUILDDIR = build
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
TARGET = $(BUILDDIR)/programa

$(TARGET): $(SOURCES)
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -rf $(BUILDDIR)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run
```

### **Compilar e executar:**
```bash
# No terminal do VS Code
make run
```

## 🗂️ **Exemplo Prático com Seu Código**

### **Estrutura do projeto:**
```
gradebook_project/
├── include/
│   └── GradeBook.h
├── src/
│   ├── GradeBook.cpp
│   └── main.cpp
└── Makefile
```

### **GradeBook.h (em include/):**
```cpp
#include <string>
using std::string;

class GradeBook
{
public:
    GradeBook( string );
    void setCourseName( string );
    string getCourseName();
    void displayMessage();
    void inputGrades();
    void displayGradeReport();
    int maximum( int, int, int );
private:
    string courseName;
    int studentMaximum;
};
```

### **GradeBook.cpp (em src/):**
```cpp
#include <iostream>
#include "../include/GradeBook.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Suas implementações aqui...
GradeBook::GradeBook( string name ) {
    setCourseName( name );
    studentMaximum = 0;
}

// ... resto do seu código GradeBook.cpp
```

### **main.cpp (em src/):**
```cpp
#include <iostream>
#include "../include/GradeBook.h"
using namespace std;

int main()
{
    GradeBook myGradeBook( "CS101 C++ Programming" );
    
    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
    
    return 0;
}
```

## 🚀 **Método 2: Compilação Direta no Terminal**

```bash
# Na pasta do projeto
mkdir -p build
g++ -g -Iinclude -o build/programa src/*.cpp
./build/programa
```

## 🔧 **Extensões Recomendadas para VS Code**

Instale estas extensões:
- **C/C++** (Microsoft)
- **C/C++ Extension Pack** 
- **CMake Tools** (para projetos mais complexos)
- **Code Runner** (opcional)

## 📝 **Passos para Testar:**

1. **Crie a estrutura de pastas** como mostrado acima
2. **Coloque seus arquivos** nos diretórios corretos
3. **Use Ctrl+Shift+B** para compilar (build)
4. **Use F5** para debuggar
5. **Ou use o terminal**: `make run`

## ❗ **Solução de Problemas Comuns**

**Erro: "GradeBook.h: No such file or directory"**
- Verifique se o arquivo está na pasta `include/`
- Verifique se o caminho no `#include` está correto

**Erro: "undefined reference to GradeBook::function"**
- Certifique-se que todos os `.cpp` estão sendo compilados
- Verifique se a compilação inclui `src/*.cpp`

Com essa configuração, seu projeto com múltiplos arquivos deve compilar e executar perfeitamente! 🎯