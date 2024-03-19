#include<stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
    float price;
};
struct Book inputBook(){
    struct Book book;
    printf("Enter title:");
    scanf("%s",book.title);
    printf("Enter a author");
    scanf("b%s",book.author);
    printf("Enter published year");
    scanf("%d",&book.year);
    printf("Enter a price");
    scanf("%f",&book.author);
    printf("Enter a price");
    scanf("%f",&book.price);
    return book;
}


void displaybook(struct Book book){
    printf("\nTitle:%s",book.title);
     printf("\n:author%s",book.author);
      printf("\npublish year:%d",book.year);
       printf("\nprice:%f",book.price);

}


int main(){
    int numBooks;
    printf("Enter a number of books");
    scanf("%d",&numBooks);
    struct Book library[numBooks];
    for(int i=0;i<numBooks;i++){
        printf("Enter a book details %d",i+1);
        library[i] = inputBook();
    }
printf("\n books detail \n");
for(int i=0;i<numBooks;i++){
    printf("\n Book %d",i+1);
    displaybook(library[i]);
} 
return 0;   
}