struct bar {
    int a[100];
};

struct bar y;

void foo(){
  struct bar x = {{0}};
  y = x;            // with -fno-builtin, this still changed to memset
                    // x86 clang(all version) gcc(4.1.2) -O0 -fno-builtin -ffreestanding
                    // arm clang(all version) gcc(all version) -O0 -fno-builtin -ffreestanding
}

int main(){
    foo();
}