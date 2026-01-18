# コンパイラとフラグの設定
CC = gcc
CFLAGS = -Wall
TARGET = main

# ソースファイルとオブジェクトファイル
SRCS = main.c calc.c
OBJS = $(SRCS:.c=.o)

# デフォルトターゲット
all: $(TARGET)

# 実行ファイルの生成
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# クリーンアップ
clean:
	rm -f $(TARGET) $(OBJS)

# 実行
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
