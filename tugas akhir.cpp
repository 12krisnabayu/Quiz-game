#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>

using namespace std;

void data_diri();
void pilih_game();
void hasil_score();
void bantuan();

int main()
{
 int pilih,s;
 char judul,x;

 system("cls");
 do{
 ifstream file;
 file.open("judul.txt");
 while(!file.eof())
 {
     file.get(judul);
     cout<<judul;
 }
 file.close();

 cout << "\t\t\t=====================================================================================\n";
 cout << "\n\t\t\t1.Isi Data Diri\n";
 cout << "\n\t\t\t2.Pilih Game\n";
 cout << "\n\t\t\t3.Riwayat Score\n";
 cout << "\n\t\t\t4.Bantuan\n";
 cout << "\n\t\t\t5.Keluar\n";
 cout << "\t\t\t=====================================================================================\n";
 cout << "\n\t\tPilih antara (1-4) = ";
 cin>>pilih;
 switch (pilih){
 case 1:
     data_diri();
     cout << "\n\t\tTekan Y untuk memilih Game\n\t\t";
     cin >> x;
     pilih_game();
     system("cls");
     break;
 case 2:
     pilih_game();
     cout << "\n\t\tApakah ingin kembali ke menu? \n\t\tY/T\t";
     cin >> x;
     system("cls");
     break;
 case 3:
     hasil_score();
     cout << "\n\t\tApakah ingin kembali ke menu? \n\t\tY/T\t";
     cin >> x;
     system("cls");
     break;
 case 4:
     bantuan();
     cout << "\n\t\tApakah ingin kembali ke menu? \n\t\tY/T\t";
     cin >> x;
     system("cls");
     break;
 case 5:
     exit(1);
     break;
 default:
     cout << "\n\t\tPilihan Tidak ada.";
     cout << "\n\t\tApakah ingin kembali ke menu? \n\t\tY/T\t";
     cin >> x;
     system("cls");
     }
 }while(x=='Y'||x=='y');
    getch();

}
void data_diri()
{
 struct
 {
    char nama[100];
    int umur;
 }usr;
 system("cls");
    cout << "\t\t\t===========================================================================\n";
    cout << "\t\t\t\t\t\t\tMasukkan Data Diri\n";
    cout << "\t\t\t===========================================================================\n";
    cout << "\n\t\t\tMasukkan Nama = ";fflush(stdin);
    gets(usr.nama);
    cout << "\t\t\tMasukkan Umur = ";
    cin >> usr.umur;

    ofstream score;
    score.open("score.txt",ios::app);
    score << "\t\t\t===========================================================================\n"<<endl;
    score << "\t\t\t\t\t\t\tRiwayat Score\n"<<endl;
    score << "\t\t\t===========================================================================\n"<<endl;
    score << "\n\t\t\tNama = "<<usr.nama<<endl;
    score << "\t\t\tUmur = "<<usr.umur<<endl;
}

void pilih_game()
  {
    system("cls");
    int a,b=0;
    float score;
    char jawab;
    cout << "\t\t\t===========================================================================\n";
    cout << "\t\t\t\t\t\t\tPilihan Quiz\n";
    cout << "\t\t\t===========================================================================\n";
    cout << "\n\t\t\t1.Quiz Logika\n";
    cout << "\n\t\t\t2.Quiz Pengetahuan\n";
    cout << "\t\t\t===========================================================================\n";
    cout << "\n\t\t\tPilih Quiz =";
    cin >> a;
    system("cls");
    if(a==1){
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Logika\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t1.Supir : Mobil\n";
        cout << "\t\t\t\tA. Pesawat : Pilot\n\t\t\t\tB. Kuda : Pedati\n\t\t\t\tC. Masinis : Kereta Api\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='C'||jawab=='c'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Logika\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t2.Pikiran : Otak\n";
        cout << "\t\t\t\tA. Buku : Printer\n\t\t\t\tB. Kata-kata : Lisan\n\t\t\t\tC. Komputer : Ketikan\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='B'||jawab=='b'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Logika\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t3.Dompet : Uang\n";
        cout << "\t\t\t\tA. Gunung : Harimau\n\t\t\t\tB. Tas sekolah : Buku\n\t\t\t\tC. Laut : Garam\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='B'||jawab=='b'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Logika\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t4.Agama : Atheis\n";
        cout << "\t\t\t\tA. Sandal : Sakit kaki\n\t\t\t\tB. Tali : Jatuh\n\t\t\t\tC. Menikah : Bujang\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='C'||jawab=='c'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Logika\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t5.Pesawat : Avtur\n";
        cout << "\t\t\t\tA. Sepeda motor : Bensin\n\t\t\t\tB. Radio : Listrik\n\t\t\t\tC. Pedati : Kuda\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='A'||jawab=='a'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        ofstream score;
        score.open("score.txt",ios::app);
        score << "\t\t\tScore = "<<b<<"\n"<<endl;
        score.close();

    }
    else if(a==2){
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Pengetahuan\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t1.Semua program C/C++ harus mempunyai fungsi?\n";
        cout << "\t\t\t\tA. start()\n\t\t\t\tB. system()\n\t\t\t\tC. main()\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='C'||jawab=='c'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Pengetahuan\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t2.Untuk menulis komentar pada C++ adalah...\n";
        cout << "\t\t\t\tA. /*Komentar*/\n\t\t\t\tB. */Komentar*/\n\t\t\t\tC. {Komentar}\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='A'||jawab=='a'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Pengetahuan\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t3.Tanda yang digunakan untuk mengakhiri baris dari kode C/C++ adalah...\n";
        cout << "\t\t\t\tA. .\n\t\t\t\tB. ;\n\t\t\t\tC. :\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='B'||jawab=='b'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Pengetahuan\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t4.Tanda yang digunakan untuk menginformasikan awal dan akhir dari blok kode?\n";
        cout << "\t\t\t\tA. <>\n\t\t\t\tB. ()\n\t\t\t\tC. {}\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='C'||jawab=='c'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();
        system("cls");
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\t\tQuiz Pengetahuan\n";
        cout << "\t\t\t===========================================================================\n";
        cout << "\t\t\t5.Membalik letak urutan pada string menggunakan?\n";
        cout << "\t\t\t\tA. strrev\n\t\t\t\tB. strlen\n\t\t\t\tC. strcat\n";
        cout << "\t\t\tJawab = ";
        cin >> jawab;
        if(jawab=='A'||jawab=='a'){
            b=b+20;
            cout << "\t\t\tJawaban Anda benar.\n\t\t\tScore = "<<b;
        }
        else
            cout <<"\t\t\tJawaban Anda salah.";
            getch();

        ofstream score;
        score.open("score.txt",ios::app);
        score << "\t\t\tScore = "<<b<<"\n"<<endl;
        score.close();
    }
  }

 void hasil_score()
  {
    system("cls");
    char score;
    ifstream file;
    file.open("score.txt");
    while(!file.eof())
    {
        file.get(score);
        cout<<score;

    }
    file.close();
    getch();
  }

  void bantuan()
  {
    system("cls");
        cout << "\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\tBantuan\n";
        cout << "\t\t===========================================================================\n";
        cout << "\t\t\t\t\tProgram Game Quiz\n";
        cout << "\t\t>>Game quiz ini adalah suatu program yang dapat melihat sekilas kemampuan anda\n";
        cout << "\t\t>>Sebelum Anda memulai game, anda diwajibkan mengisi data diri terlebih dahulu\n\t\tuntuk mengetahui hasil score akhir Anda\n";
        cout << "\t\t>>Game quiz ini terdiri dari dua pilihan quiz yaitu quiz logika dan quiz pengetahuan\n";
        cout << "\t\t>>Ditiap quiz terdapat 5 soal dan ditiap nomornya bernilai 20\n";
        cout << "\t\t>>Jika bisa menjawab semua soal dengan benar baik quiz logika maupun quiz pengetahuan\n\t\t mendapatkan nilai total 100\n";
        cout << "\t\t>>Terdapat 3 pilihan untuk menjawab yaitu A, B, dan C\n";
        cout << "\t\t>>Jawablah pertanyaan dengan benar\n";
        cout << "\t\t===========================================================================\n";
        cout << "\t\t\t\t\t\tSelamat mencoba\n";
        cout << "\t\t\t\tProgram Game Quiz by Krisna Bayu Aditya N.\n";
        cout << "\t\t===========================================================================\n";
        getch();
  }

