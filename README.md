# get_next_line
## 概要
ファイルや標準入力から１行づつ文字列を読み込む関数  
## 宣言
```c
int	get_next_line(int fd, char **line);
```
## 引数
- ファイルディスクリプタ
	```c
	int fd
	```
- 読み込んだ文字列を入れる用のポインタ
	```c
	char **line
	```
## 返り値
- 1 -> まだ行が残っている
- -1 -> 最後の行を読み込んだ
##  使用方法
使用する.cファイルの上部にインクルードしてください。
```c
#include get_next_line.h
```
- ### ファイル名から参照する
	```c
	char	*get_line;
	int		r;
	int		fd;

	fd = open('file_path', O_RDONLY);
	r = 1;
	while (r == 1)
	{
		r = get_next_line(fd, &get_line);
		if (r == -1)
			break;
		/*
		好きな処理
		*/
		free(get_line);
	}
	close(fd);
	```