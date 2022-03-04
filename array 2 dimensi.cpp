# sertakan  < iostream >

menggunakan  namespace  std ;

int  utama (){

     // deklarasi larik dua dimensi
     // Dengan jumlah elemen baris = 3
     // dan jumlah elemen kolom = 2
     int matriks [ 3 ][ 2 ];
     int matrikb [ 3 ][ 2 ] = {{ 1 , 2 },{ 3 , 4 },{ 5 , 6 }};
     int matriks [ 3 ][ 2 ];

     // Mendeklarasi variabel untuk
     // Indeks perulangan
     int i,j;

     cout<< " \t =============================== " ;
     cout<< " \n\t = Penjumlahan Matrik Ordo 3x2 = \n " ;
     cout<< " \t =============================== \n\n " ;

     // Membuat nilai kedalam
     // matriks larik elemen-elemen
     // Sedangkan elemen-elemen array matrikb
     // Sudah diisi saat deklarasi (inisialisasi)
     untuk (i= 0 ;i< 3 ;i++){
          untuk (j= 0 ;j< 2 ;j++){
               cout<< " matrik a [ " <<i<< " ] [ " <<j<< " ] = " ;
               cin>>matrika[i][j];
          }
     }

     cout<<endl;

     // melakukan penjumlahan array matriks dan matriksb
     // Dan menyimpan hasilnya ke array matrikc;
     untuk (i= 0 ;i< 3 ;i++){
          untuk (j= 0 ;j< 2 ;j++){
               matrikc[i][j]=matrika[i][j] + matrikb[i][j];
          }
     }

     // sistrika
     cout<< " \n Matriks a \n " ;
     untuk (i= 0 ;i< 3 ;i++){
          untuk (j= 0 ;j< 2 ;j++){
               cout<<matrika[i][j]<< "  " ;
          }
          cout<<endl;
     }

     // sujud matrikb
     cout<< " \n Matrik b \n " ;
     untuk (i= 0 ;i< 3 ;i++){
          untuk (j= 0 ;j< 2 ;j++){
               cout<<matrikb[i][j]<< "  " ;
          }
          cout<<endl;
     }

     // hasil penjumlahan / matrikc
     // (dalam bentuk matrik dengan ordo 3x2)
     cout<< " \n Matrik c atau hasil \n " ;
     untuk (i= 0 ;i< 3 ;i++){
          untuk (j= 0 ;j< 2 ;j++){
               cout<<matrikc[i][j]<< "  " ;
          }
          cout<<endl;
     }

     kembali  0 ;
}

