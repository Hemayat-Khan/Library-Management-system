#include<iostream>
#include<fstream>
#include<vector>
#include<string>
struct Book{
    int bookID;
    string title;
    string author;
    int quantity;
    //mkjjh
    ///sxjkxbxjsjj
    //jvjvxjdj
    ///hdxbkhsqbhqxbj,bjhexbjh
    ///jccxjhsxvjhsbjj
    hugyuyuhhuhui
    wajiddddddddddddddd222222222ddddd
    hemayatkhanjvvhbhbhbdbhbbjbshbssb
    jvdjbjdbdwkbjdbwdjbwdxvbxvmhxdvjdxvxvdkkxxvu
    hemayar



};
void  addbook(vector<Book>&books);
void   searchbook(vector<Book>&books);  
void  displaybook(vector<Book>&books);
void  saveToFile(vector<Book>&books);
void  loadFromFile(vector<Book>&books);
int main(){
    vector<Book> books;
    loadFromFile(books);
    int choice;
    do{
        cout<<"1. Add book"<<endl;
        cout<<"2. Search book"<<endl;
        cout<<"3. Display book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                addbook(books);
                break;
            case 2:
                searchbook(books);
                break;
            case 3:
                displaybook(books);
                break;
            case 4:
                saveToFile(books);
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=4);
    return 0;
    // gj h hjkh jhj jhkj hjkh kjh h
     //hugjg jk
      //ukjg kh
      //hkjhjh
      //chghvhvhgvvh
}
void  addbook(vector<Book>&books){
    Book book;
    cout<<"Enter book ID: ";
    cin>>book.bookID;
    cout<<"Enter title: ";
    cin.ignore();
    getline(cin,book.title);
    cout<<"Enter author: ";
    getline(cin,book.author);
    cout<<"Enter quantity: ";
    cin>> newbook.quantity;
    books.push_back(newbook);
    cout<<"Book added successfully"<<endl;
}
void   searchbook(vector<Book>&books){
    int searchid;
    cout<<"Enter book ID: ";
    string searchTitle;
    cout<<"Search by :\n1. ID\n2. Title\nEnter your choice: ";
    int choice;
    cin>>choice;
    if(choice==1){
        cout<<"Enter book ID: ";
        cin>>searchid;
        for(int i=0;i<books.size();i++){
            if(books[i].bookID==searchid){
                cout<<"Title: "<<books[i].title<<endl;
                cout<<"Author: "<<books[i].author<<endl;
                cout<<"Quantity: "<<books[i].quantity<<endl;
                return;
            }
        }
        }
        cout<<"Book not found"<<endl;
    }
    else if(choice==2){
        cout<<"Enter book title: ";
        cin.ignore();
        getline(cin,searchTitle);
        for(int i=0;i<books.size();i++){
            if(books[i].title==searchTitle){
                cout<<"ID: "<<books[i].bookID<<endl;
                cout<<"Author: "<<books[i].author<<endl;
                cout<<"Quantity: "<<books[i].quantity<<endl;
                return;
            }
        }
        cout<<"Book not found"<<endl;
    }
    void  displaybook(vector<Book>&books){
        if(books.empty()){
            cout<<"No books available in the library"<<endl;
            return;
        }
        cout<<"\n unAvail"
    else{
        cout<<"Invalid choice"<<endl;
    }
    cin>>id;
    for(int i=0;i<books.size();i++){
        if(books[i].bookID==id){
            cout<<"Title: "<<books[i].title<<endl;
            cout<<"Author: "<<books[i].author<<endl;
            cout<<"Quantity: "<<books[i].quantity<<endl;
            return;
        }
    }
    void saveToFile(const vector<Book>&books)
    {
        ofstream file("books.txt");
        if (file.is_open())
        {
            for(cons auto& book:books)
            {
                file<<book.bookID<<endl;
                file<<book.title<<endl;
                file<<book.author<<endl;
                file<<book.quantity<<endl;
            }
            file.close();
            cout<<"Books saved to file"<<endl;
        }
        else
        {
            cout<<"Error opening file"<<endl;
        }
        void loadFromFile(vector<Book>&books)
        {
            ifstream file("books.txt");
            if (file.is_open())
            {
                Book book;
                while(file>>book.bookID)
                {
                    file.ignore();
                    getline(file,book.title);
                    getline(file,book.author);
                    file>>book.quantity;
                    books.push_back(book);
                }
                file.close();
                cout<<"Books loaded from file"<<endl;
            }
            else
            {
                cout<<"Error opening file"<<endl;
            }
        }
    }
    }