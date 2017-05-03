#include "stat/stat-public.h"
#include "dyn/dyn-public.h"

void dyn1(const char *from) {
  stat1("dyn1");
  stat1(from);
  stat1("hello, from dyn1");
}
