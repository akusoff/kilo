#include <unistd.h>
int main() {
  char c;
  while(read(STDN_FILENO, &c, 1) == 1);
  return 0;
}
