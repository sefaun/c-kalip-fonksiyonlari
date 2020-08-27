int deneme(int *sayi1, int *sayi2) {
    int baska = 0;
    baska = *sayi1;
    *sayi1 = *sayi2;
    *sayi2 = baska;
}

int umit(int rakam1, int rakam2) {
  int a = rakam1;  //172    1010 1100
  int b = rakam2;  //186    1011 1010
  
  int c = a | b;   //1011 1110
  
  return c;
}
