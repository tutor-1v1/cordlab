https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "cord-interface.h"

int main(int argc, char** argv) {
  cord_t c;

  c = cord_new("");
  assert(c == NULL);
  assert(cord_length(c) == 0);

  return 0;
}