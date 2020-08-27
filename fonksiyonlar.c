#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int all_functions() {
  //----------memset-----------
  char cdizi[] = "Bilgisayar";
  printf("cdizi bellek: %s\n", cdizi); //çýktý = bilgisayar
  memset(cdizi, 'h', 5); //(kopyalanan yer, yerine geçecek deðer, baþtan 5 karakteri h yapar)
  printf("cdizi bellek: %s\n\n", cdizi); //çýktý = hhhhhsayar
  //---------------------------
  
  //-----memcpy & memccpy------
  const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    memset(dest, '\0', 40); //dest'in içini temizliyor
    memcpy(dest, cp, 40); //(kopyalanacaðý yer, kopyalanan deðer, kopyalanan karater sayýsý)
    printf("%s\n", dest); //çýktý = Bilgisayar&Programlama

    memset(dest, '\0', 40);
    memccpy(dest, cp, '&', 40); //(kopyalanacaðý yer, kopyalancak deðerin baþýný gösteren deðer, kopyalamanýn biteceði yer, kopyalanacak karakter sayýsý)
    printf("%s\n\n", dest); //çýktý = Bilgisayar&
  //---------------------------

  //-----------memchr----------
   const char *tp = "Bilgisayar";
    const char td = 'g';
    char *degisken = memchr(tp, td, strlen(tp)); //(arama yapýlacak bölge, neyin adresinin aranacaðý, aranacak bölgenin uzunluðu)
    printf("%c karakterinin bellek adresi: %p\n\n", td, degisken); //çýktý = g karakterinin bellek adresi: 0000000000405060
  //---------------------------
  
  //-----------strlen----------
   const char *kp = "Bilgisayar";
    int ret;
    ret = strlen(kp); //(uzunluðu bulunacak bölgenin adý)
    printf("%s karakter dizisinin uzunlugu: %d\n\n", kp, ret); //çýktý = Bilgisayar karakter dizisinin uzunlugu: 10
  //---------------------------
  
  //-----------memcmp----------
   const char *wp1 = "Bilgisayar";
    const char *wp2 = "Bilgileri";
    int wet;
    wet = memcmp(wp1, wp2, 5); //(karþýlaþtýrma yapýlacak ilk bölge, karþýlaþtýrma yapýlacak ikinci bölge, karþýlaþtýrma yapýlacak byte sayýsý)
    if(wet<0) printf("wp1 bellek icerigi wp2 bellek iceriginden kucuktur!\n\n");
    else if(wet>0) printf("wp2 bellek icerigi wp1 bellek iceriginden kucuktur!\n\n");
    else printf("wp1 bellek icerigi wp2 bellek icerigine esittir!\n\n"); //çýktý = 
  //---------------------------
  
  //-----------memmove----------
   char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlar";
    printf("cdizi1 bellek icerigi: %s, cdizi2 bellek icerigi: %s\n", cdizi1, cdizi2); //çýktý = cdizi1 bellek icerigi: Bilgisayar, cdizi2 bellek icerigi: Programlar
    memmove(cdizi1, cdizi2, 10); //(2. deðerin kopyalanacaðý yer, 1. bölgeye kopyalanacak deðer, kopyalanacak maksimum karakter sayýsý)
    printf("cdizi1 bellek icerigi: %s, cdizi2 bellek icerigi: %s\n\n", cdizi1, cdizi2); //çýktý = cdizi1 bellek icerigi: Programlar, cdizi2 bellek icerigi: Programlar
  //---------------------------
  
  //-----------strcat----------
   char cdizi4[] = "Bilgisayar";
    const char cdizi5[] = " Programlama";
    strcat(cdizi4, cdizi5); //(ilk deðer, ikinci deðer)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi4); //çýktý = cdizi1 bellek icerigi: Bilgisayar Programlama
  //---------------------------
  
  //-----------strchr----------
   const char cdizi6[] = "Bilgisayar";
    char *set;
    set = strchr(cdizi6, 's'); //(aramanýn yapýlacaðý yer, arama yapýlacak deðer)
    printf("Bulunan karakterden itibaren dizi icerigi: %s\n\n", set); //çýktý = Bulunan karakterden itibaren dizi icerigi: sayar
  //---------------------------
  
  //-----------strcmp----------
  //karþýlaþtýrýlan deðerler ayný ise 0 döner.
    const char *qp1 = "Bilgisayar";
    const char *qp2 = "Bilgileri";
    int qet;
    qet = strcmp(qp1, qp2); //(karþýlaþtýrma yapýlacak ilk deðer, karþýlaþtýrma yapýlacak ikinci deðer)
    if(qet<0) printf("qp1 karakter dizisi qp2 karakter dizisinden kucuktur!\n\n");
    else if(qet>0) printf("qp2 karakter dizisi qp1 karakter dizisinden kucuktur!\n\n"); //çýktý =
    else printf("qp1 karakter dizisi qp2 karakter dizisine esittir!\n\n");
  //---------------------------
  
  //-----------strcpy----------
  	char cdizi11[] = "Bilgisayar";
    const char cdizi12[] = "Programlama";
    strcpy(cdizi11, cdizi12); //(kopyalamanýn yapýlacaðý yer, kopyalanacak deðer)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi11); //çýktý = cdizi1 bellek icerigi: Programlama
  //---------------------------
  
  //-----------strcspn----------
  	const char cdizi13[] = "Bilgisayar";
    const char cdizi24[] = "er";
    int tet;
    tet = strcspn(cdizi13, cdizi24); //(karakter aranancak yer, her karakter cdizi13 içerisinde aranýr ve ilk eþit gelen deðer dýþarý çýkar)
    printf("Bulunan karakterin indeks degeri: %d\n\n", tet); //çýktý = Bulunan karakterin indeks degeri: 9
  //---------------------------
  
  //-----------strncat----------
  	char cdizi221[] = "Bilgisayar";
    const char cdizi222[] = " Programlama";
    strncat(cdizi221, cdizi222, 4); //(ilk deðer, ikinci deðer, ikinci deðerden eklenecek karakter sayýsý)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi221); //çýktý = cdizi1 bellek icerigi: Bilgisayar Pro
  //---------------------------
  
  //-----------strncpy----------
  	char cdizi133[] = "Bilgisayar";
    const char cdizi233[] = "Programlama";
    strncpy(cdizi133, cdizi233, 7); //(ilk deðer, ikinci deðer, ilk deðerin alýnacak karakter sayýsý)
    printf("cdizi1 bellek icerigi: %s\n\n", cdizi133); //çýktý = Programyar
    //---------------------------
    
    //-----------strrchr----------
  	const char cdizi44[] = "Bilgisayar";
    char yd = 'i';
    char *yet;
    yet = strrchr(cdizi44, yd); //(arama yapýlacak yer, aranacak deðer)
    printf("Bulunan son %c karakterinden itibaren dizi icerigi: %s\n\n", yd, yet); //çýktý = Bulunan son i karakterinden itibaren dizi icerigi: isayar
    //---------------------------
    
    //-----------strspn----------
  	const char *jp1 = "Bilgisayar";
    const char *jp2 = "Bilg";
    int uet;
    uet = strspn(jp1, jp2);
    printf("cp2 dizisi icindeki karakterlerin cp1 dizisi icindeki sayisi: %d\n\n", uet); //çýktý = cp2 dizisi icindeki karakterlerin cp1 dizisi icindeki sayisi: 5
    //---------------------------
    
    //-----------strxfrm----------
    const char cdizi155[20] = "Bilgisayar";
    char cdizi255[20];
    int ket;
    ket = strxfrm (cdizi255, cdizi155, 5); //(çevrilen deðerin koyulacaðý yer, çevrilecek deðer, çevrilecek deðer sayýsý)
    cdizi255[5]='\0'; //dizinin 5. deðerini boþalt demek
    printf("Ilk karakter dizisi: %s, cevrilen karakter sayisi: %d\n", cdizi155, ket); //çýktý = Ilk karakter dizisi: Bilgisayar, cevrilen karakter sayisi: 10
    printf("Elde edilen yeni karakter dizisi: %s", cdizi255); //çýktý = Elde edilen yeni karakter dizisi: Bilgi
    //---------------------------
}
