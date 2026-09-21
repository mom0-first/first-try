# first-try

C 语言学习仓库。包含入门程序和练习代码。

## 目录结构

| 路径 | 内容 |
|------|------|
| `main.c` | Hello World 入门程序 |
| `2026_9month/20.c` | 2026 年 9 月的练习 |
| `nothing/momo_first.c` | 早期练习 |
| `.vscode/` | 编辑器配置（编译任务、调试配置） |

## 环境要求

- GCC (MinGW-w64)
- 仅使用 C 标准库

## 编译运行

```powershell
gcc -Wall -Wextra -g main.c -o main.exe
.\main.exe
```

在 VS Code 里：

- `Ctrl+Shift+B` 一键编译当前文件
- `F5` 调试运行
- `F10` / `F11` 单步调试

## 说明

`*.exe`、`*.o`、`build/` 等编译产物已通过 `.gitignore` 排除，不会提交到仓库。

## 学习进度

- [x] 搭建开发环境（VS Code + GCC + Git）
- [x] 配置 SSH 密钥并连接到 GitHub
- [x] 第一个 C 程序
- [ ] 掌握变量与运算符
- [ ] 掌握分支与循环
- [ ] 掌握数组与指针
- [ ] 掌握结构体与链表
- [ ] 掌握文件操作
