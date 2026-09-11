#include <stdio.h>
struct Student{
    char name[50];
    long  id;

    struct {
        char street[50];
        char district[30];
        char city[30];
    } 
    address;
   
    char phone[20];
};
int main()

{
    struct  Student s1 = {.name = "POOM KONGHUAYROB",
                          .id = 69011014,
                          .address ={
                            .street = "3 Moo 2, Chalongkrung Rd.",
                            .district = "Ladkrabamg",
                            .city = "Bangkok"
                          }, .phone = "088 888 8888"
                        };

  printf("Full name : %s, ID: %ld\n", s1.name, s1.id);
  printf("Address: %s\n", s1.address.street);
   printf("%s, %s\n\n", s1.address.district, s1.address.city);
   printf("Tel. %s\n", s1.phone);

   return 0;   
}