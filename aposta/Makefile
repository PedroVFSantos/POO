# Variáveis do Makefile
CXX = g++
CXXFLAGS = -Wall -std=c++11
OBJDIR = obj
BINDIR = bin
TARGET = $(BINDIR)/app

# Diretórios de origem e objetos
SRC = main.cpp Aposta.cpp
OBJ = $(SRC:%.cpp=$(OBJDIR)/%.o)

# Regras do Makefile
all: $(BINDIR) $(TARGET)  # Garantir que o diretório bin exista

# Como compilar o arquivo principal
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Como compilar cada arquivo .cpp em .o
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Garantir que o diretório bin exista
$(BINDIR):
	@mkdir -p $(BINDIR)

# Limpeza dos arquivos gerados
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Recompilar o código
rebuild: clean all

.PHONY: all clean rebuild

