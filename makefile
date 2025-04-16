# Variáveis
CC = gcc
CFLAGS = -Wall
SRC_DIR = src
BIN_DIR = bin

# Encontre todos os arquivos fonte
SOURCES := $(wildcard $(SRC_DIR)/*.c)

# Defina os arquivos executáveis correspondentes
EXECUTABLES := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%.exe,$(SOURCES))

# Regra principal (compilar tudo)
all: $(BIN_DIR) $(EXECUTABLES)

# Criação do diretório bin, se necessário
$(BIN_DIR):
    mkdir -p $(BIN_DIR)

# Regra para compilar os arquivos .c em .exe
$(BIN_DIR)/%.exe: $(SRC_DIR)/%.c
    $(CC) $(CFLAGS) -o $@ $<

# Limpeza dos arquivos gerados
clean:
    rm -f $(BIN_DIR)/*.exe
