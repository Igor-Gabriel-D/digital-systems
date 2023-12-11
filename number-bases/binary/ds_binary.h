# include <stdio.h>
# include <math.h>

int decimal_to_binary(int decimal) {
  int size_list = trunc(log2(decimal)) + 1;
  int b[size_list];

  for (int i = size_list-1; i >= 1; i--) {
    b[i] = (decimal % 2);
    decimal = decimal / 2;
  }
  b[0] = 1;

  int result = 0; 
  for (int i = size_list; i > 0; i--) {
    result = result + b[i] * pow(10, i);
  }

  return result;
}
