/*successful
    x86-64 gcc 4.8.0-12.0.1 -O2
    x86-64 clang 3.1.0-14.0.0 -O1
    Compile and run the program. Input 0, output "ok" means check "if(__builtin_ctz(p)>= 32)" not remove, and there is no bug.
*/
#include<stdio.h>

void test(int p){
    
    if(__builtin_ctz(p)>= 32){ // removed
		printf("ok");
	}

}

int main(int argc, char** argv){
    int a = atoi(argv[1]);
    //int a = 0;
    test(a);

}