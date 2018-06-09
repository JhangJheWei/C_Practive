one:one_main.c Subroutine_program.c
	gcc -o one one_main.c Subroutine_program.c
	#o->指定輸出的檔名
one_main.o:one_main.c Declare_program.h Subroutine_program.c
	gcc -c one_main.c
	#c->只編譯不作連結
#Subroutine_program.o:Subroutine_program.c
	#gcc -c Subroutine_program.c