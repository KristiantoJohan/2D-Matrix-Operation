#include <iostream>
#include <iomanip>

//  Prototype function
void judul();
void deskripsi();
void langkah_langkah();
void opsiOrdo();
void opsiOperasi();
void penjumlahanMatrix();
void penguranganMatrix();
void perkalianMatrix();
void determinanMatrix();
void inversMatrix();

//  switchIndex akan bernilai 2 jika ordo yang dipilih 2x2 dan akan bernilai 3 jika yang dipilih 3x3
int switchOrdoIndex = 0;

//  indexInput untuk user memilih opsi
int indexInput;

//  Insialisasi matrix dalam bentuk array
double matrix2x2_Pertama[2][2];
double matrix2x2_Kedua[2][2];
double matrix2x2_adjoin[2][2];
double matrix3x3_Pertama[3][3];
double matrix3x3_Kedua[3][3];
double matrix3x3_adjoin[3][3];

int main(int argc, char **argv)
{
    judul();
    deskripsi();
    langkah_langkah();
    opsiOrdo();
    return 0;
}

void judul() 
{
    std::cout << "   ____                             _    __  ___      __       _\n";
    std::cout << "  / __ \\____  ___  _________ ______(_)  /  |/  /___ _/ /______(_)  __\n";
    std::cout << " / / / / __ \\/ _ \\/ ___/ __ `/ ___/ /  / /|_/ / __ `/ __/ ___/ / |/_/\n";
    std::cout << "/ /_/ / /_/ /  __/ /  / /_/ (__  ) /  / /  / / /_/ / /_/ /  / />  <\n";
    std::cout << "\\____/ .___/\\___/_/   \\__,_/____/_/  /_/  /_/\\__,_/\\__/_/  /_/_/|_|\n";
    std::cout << "    /_/\n";
    std::cout << "______________________________________________________________________\n";
    std::cout << "**********************************************************************\n";
    std::cout << "----------------------------------------------------------------------\n";
    std::cout << "                   KELOMPOK EMPAT DASAR PEMROGRAMAN                   \n";
    std::cout << "                       TEKNIK KOMPUTER 1A  2021                       \n";
    std::cout << "----------------------------------------------------------------------\n\n";
}

void deskripsi()
{
    std::cout << "(+) DESKRIPSI PROGRAM :\n\n";
    std::cout << "Operasi Matrix adalah program yang dibuat oleh ";
    std::cout << "kelompok 4 dalam rangka\nmemenuhi tugas pada mata kuliah Dasar Pemrograman. ";
    std::cout << "Program ini\nberfungsi untuk memudahkan user dalam melakukan berbagai operasi ";
    std::cout << "yang\nmelibatkan satu/dua matrix. Ordo yang dapat ditangani oleh program\nadalah 2x2 dan 3x3. ";
    std::cout << "Adapun operasi yang dapat dilakukan pada program\nini adalah penjumlahan, pengurangan, ";
    std::cout << "perkalian, mencari nilai\ndeterminan, dan invers. Selamat mencoba! :)\n\n";
}

void langkah_langkah()
{
    std::cout << "(+) LANGKAH-LANGKAH PENGGUNAAN PROGRAM : \n\n";
    std::cout << "Masukkan index sesuai dengan opsi yang diinginkan. Kemudian, ikuti\n";
    std::cout << "langkah-langkah berikut:\n";
    std::cout << "1.  Pilih ordo matriks yang diinginkan\n";
    std::cout << "2.  Pilih operasi yang diinginkan\n";
    std::cout << "3.  Masukkan seluruh matrix yang akan dioperasikan\n";
    std::cout << "4.  Hasil akan ditampilkan setelah operasi selesai dilaksanakan\n\n\n";
}

void opsiOrdo()
{
    std::cout << "## Pilih Ordo yang diinginkan!\n";
    std::cout << "[1] Ordo 2x2\n";
    std::cout << "[2] Ordo 3x3\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            switchOrdoIndex = 2;
            opsiOperasi();
            break;
        case 2 :
            switchOrdoIndex = 3;
            opsiOperasi();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOrdo();
            break;
    }
}

void opsiOperasi()
{
    std::cout << "## Pilih operasi yang diinginkan!\n";
    std::cout << "[1] Penjumlahan Matrix\n";
    std::cout << "[2] Pengurangan Matrix\n";
    std::cout << "[3] Perkalian Matrix\n";
    std::cout << "[4] Determinan Matrix\n";
    std::cout << "[5] Invers Matrix\n";
    std::cout << "[0] Kembali\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            penjumlahanMatrix();
            break;
        case 2 :
            penguranganMatrix();
            break;
        case 3 :
            perkalianMatrix();
            break;
        case 4 :
            determinanMatrix();
            break;
        case 5 :
            inversMatrix();
            break;
        case 0 :
            switchOrdoIndex = 0;
            opsiOrdo();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOperasi();
            break;
    }
}

void penjumlahanMatrix()
{
    if(switchOrdoIndex == 2)
    {
        std::cout << "## Penjumlahan Matrix Ordo 2x2\n";
        std::cout << "Masukkan elemen-elemen matrix pertama :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        std::cout << "Masukkan elemen-elemen matrix kedua :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Kedua[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "-------- Matrix Pertama --------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        std::cout << "--------- Matrix Kedua ---------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menampilkan hasil operasi
        std::cout << "--------- Matrix Total ---------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] + matrix2x2_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

    } else {
        std::cout << "## Penjumlahan Matrix Ordo 3x3\n";
        std::cout << "Masukkan elemen-elemen matrix pertama :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        std::cout << "Masukkan elemen-elemen matrix kedua :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Kedua[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "-------- Matrix Pertama --------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        std::cout << "--------- Matrix Kedua ---------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menampilkan hasil operasi
        std::cout << "--------- Matrix Total ---------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] + matrix3x3_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "[1] Ulangi operasi\n";
    std::cout << "[0] Kembali\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            penjumlahanMatrix();
            break;
        case 0 :
            opsiOperasi();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOperasi();
            break;
    }
}

void penguranganMatrix()
{
    if(switchOrdoIndex == 2)
    {
        std::cout << "## Pengurangan Matrix Ordo 2x2\n";
        std::cout << "Masukkan elemen-elemen matrix pertama :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        std::cout << "Masukkan elemen-elemen matrix kedua :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Kedua[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "-------- Matrix Pertama --------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        std::cout << "--------- Matrix Kedua ---------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menampilkan hasil operasi
        std::cout << "--------- Matrix Total ---------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] - matrix2x2_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

    } else {
        std::cout << "## Pengurangan Matrix Ordo 3x3\n";
        std::cout << "Masukkan elemen-elemen matrix pertama :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        std::cout << "Masukkan elemen-elemen matrix kedua :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Kedua[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "-------- Matrix Pertama --------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        std::cout << "--------- Matrix Kedua ---------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menampilkan hasil operasi
        std::cout << "--------- Matrix Total ---------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] - matrix3x3_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "[1] Ulangi operasi\n";
    std::cout << "[0] Kembali\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            penguranganMatrix();
            break;
        case 0 :
            opsiOperasi();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOperasi();
            break;
    }
}

void perkalianMatrix()
{
    if(switchOrdoIndex == 2)
    {
        std::cout << "## Perkalian Matrix Ordo 2x2\n";
        std::cout << "Masukkan elemen-elemen matrix pertama : \n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        std::cout << "Masukkan elemen-elemen matrix kedua :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Kedua[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "-------- Matrix Pertama --------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        std::cout << "--------- Matrix Kedua ---------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menampilkan hasil operasi
        std::cout << "--------- Matrix Total ---------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" 
                          << matrix2x2_Pertama[i][0] * matrix2x2_Kedua[0][j] + 
                             matrix2x2_Pertama[i][1] * matrix2x2_Kedua[1][j]
                          << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "## Perkalian Matrix Ordo 3x3\n";
        std::cout << "Masukkan elemen-elemen matrix pertama : \n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        std::cout << "Masukkan elemen-elemen matrix kedua :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Kedua[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "-------- Matrix Pertama --------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        std::cout << "--------- Matrix Kedua ---------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Kedua[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menampilkan hasil operasi
        std::cout << "--------- Matrix Total ---------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" 
                          << matrix3x3_Pertama[i][0] * matrix3x3_Kedua[0][j] +
                             matrix3x3_Pertama[i][1] * matrix3x3_Kedua[1][j] +
                             matrix3x3_Pertama[i][2] * matrix3x3_Kedua[2][j];
                std::cout << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "[1] Ulangi operasi\n";
    std::cout << "[0] Kembali\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            perkalianMatrix();
            break;
        case 0 :
            opsiOperasi();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOperasi();
            break;
    }
}

void determinanMatrix()
{
    if(switchOrdoIndex == 2)
    {
        std::cout << "## Determinan Matrix Ordo 2x2\n";
        std::cout << "Masukkan elemen-elemen matrix yang akan dideterminankan :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "----- Matrix yang Diinput -----\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] << "]";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Menghitung dan menampilkan nilai determinan dari matrix yang diinput
        float determinant = matrix2x2_Pertama[0][0]*matrix2x2_Pertama[1][1] -
                          matrix2x2_Pertama[0][1]*matrix2x2_Pertama[1][0];
        std::cout << "Determinan matriks = " << determinant;

    } else {
        std::cout << "## Determinan Matrix Ordo 3x3\n";
        std::cout << "Masukkan elemen-elemen matrix yang akan dideterminankan :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan matrix yang telah diinputkan oleh user
        std::cout << "----- Matrix yang Diinput -----\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] << "]";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        // Mencari nilai adjoin menggunakan shortcut
        // Sumber : https://www.youtube.com/watch?v=C7D36h_0Zlw
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                matrix3x3_adjoin[i][j] = 
                        matrix3x3_Pertama[(j+1)%3][(i+1)%3]*matrix3x3_Pertama[(j+2)%3][(i+2)%3] - 
                        matrix3x3_Pertama[(j+1)%3][(i+2)%3]*matrix3x3_Pertama[(j+2)%3][(i+1)%3];
            }
        }

        std::cout << std::endl;

        //  Mencari nilai determinan.
        //  Nilai determinan pada matriks berordo 3x3 adalah perkalian antara elemen-elemen di baris pertama
        //  matrix awal dengan elemen-elemen di kolom pertama matrix adjoin.
        float determinant = 0;
        for(int i = 0;i < 1;i++) {
            for(int j = 0;j < 3;j++) {
            determinant += matrix3x3_Pertama[i][j] * matrix3x3_adjoin[j][i];
            }
        }

        std::cout << "Determinan matriks = " << determinant << std::endl;
    }

    std::cout << "\n\n";
    std::cout << "[1] Ulangi operasi\n";
    std::cout << "[0] Kembali\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            determinanMatrix();
            break;
        case 0 :
            opsiOperasi();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOperasi();
            break;
    }
}

void inversMatrix()
{
    if(switchOrdoIndex == 2)
    {
        std::cout << "## Invers Matrix Ordo 2x2\n";
        std::cout << "Masukkan elemen-elemen matrix yang akan diinvers :\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix2x2_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan array yang diinputkan
        std::cout << "----- Matrix yang Diinput -----\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[" << matrix2x2_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //   Mencari nilai adjoin
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                matrix2x2_adjoin[i][j] = matrix2x2_Pertama[(j+1)%2][(i+1)%2];
            }
        }
        matrix2x2_adjoin[0][1] *= -1;
        matrix2x2_adjoin[1][0] *= -1;

        //  Mencari nilai determinan
        float determinant = matrix2x2_Pertama[0][0]*matrix2x2_Pertama[1][1] -
                            matrix2x2_Pertama[0][1]*matrix2x2_Pertama[1][0];

        //  Mencari dan menampilkan nilai invers
        std::cout << "-------- Matrix Invers --------\n";
        for(int i = 0;i < 2;i++) {
            for(int j = 0;j < 2;j++) {
                std::cout << "[";
                std::cout << std::fixed << std::setprecision(2) << matrix2x2_adjoin[i][j] * 1/determinant;
                std::cout << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "## Invers Matrix Ordo 3x3\n";
        std::cout << "Masukkan elemen-elemen matrix yang akan diinvers :\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "Elemen baris ke " << (i+1) << " kolom ke " << (j+1) << " = ";
                std::cin >> matrix3x3_Pertama[i][j];
            }
        }

        std::cout << std::endl;

        //  Menampilkan array yang diinputkan
        std::cout << "----- Matrix yang Diinput -----\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[" << matrix3x3_Pertama[i][j] << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;

        //  Mencari nilai adjoin menggunakan shortcut
        //  Sumber : https://www.youtube.com/watch?v=C7D36h_0Zlw
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                matrix3x3_adjoin[i][j] = 
                        matrix3x3_Pertama[(j+1)%3][(i+1)%3]*matrix3x3_Pertama[(j+2)%3][(i+2)%3] - 
                        matrix3x3_Pertama[(j+1)%3][(i+2)%3]*matrix3x3_Pertama[(j+2)%3][(i+1)%3];
            }
        }

        std::cout << std::endl;

        //  Mencari nilai determinan.
        //  Nilai determinan pada matriks berordo 3x3 adalah perkalian antara elemen-elemen di baris pertama
        //  matrix awal dengan elemen-elemen di kolom pertama matrix adjoin.
        float determinant = 0;
        for(int i = 0;i < 1;i++) {
            for(int j = 0;j < 3;j++) {
            determinant += matrix3x3_Pertama[i][j] * matrix3x3_adjoin[j][i];
            }
        }

         //  Mencari dan menampilkan nilai invers
        std::cout << "-------- Matrix Invers --------\n";
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                std::cout << "[";
                std::cout << std::fixed << std::setprecision(2) << matrix3x3_adjoin[i][j] * 1/determinant;
                std::cout << "]";
                std::cout << "\t";
            }
            std::cout << std::endl;
        }
    }

    std::cout << "\n";
    std::cout << "[1] Ulangi operasi\n";
    std::cout << "[0] Kembali\n";
    std::cout << ">>> ";
    std::cin >> indexInput;
    std::cout << "\n";

    switch(indexInput)
    {
        case 1 :
            inversMatrix();
            break;
        case 0 :
            opsiOperasi();
            break;
        default :
            std::cerr << "Index tidak sesuai!\n\n";
            opsiOperasi();
            break;
    }
}