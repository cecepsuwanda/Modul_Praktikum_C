# Sumber Materi Bahasa Pemrograman C

> Dokumen ini memuat **daftar materi lengkap bahasa C** (dasar → menengah → lanjutan) beserta **sumber referensi terbuka** yang dapat digunakan sebagai acuan penyusunan modul praktikum. Disusun berdasarkan kurikulum universitas, standar industri, dan sumber daring terbuka (per April 2026).

---

## Daftar Isi

- [Bagian A — Daftar Materi (Dasar → Lanjutan)](#bagian-a--daftar-materi-dasar--lanjutan)
  - [Modul 1: Pengenalan Bahasa C & Lingkungan Pengembangan](#modul-1-pengenalan-bahasa-c--lingkungan-pengembangan)
  - [Modul 2: Variabel, Tipe Data, dan Konstanta](#modul-2-variabel-tipe-data-dan-konstanta)
  - [Modul 3: Input/Output Dasar](#modul-3-inputoutput-dasar)
  - [Modul 4: Operator dan Ekspresi](#modul-4-operator-dan-ekspresi)
  - [Modul 5: Struktur Kontrol — Percabangan](#modul-5-struktur-kontrol--percabangan)
  - [Modul 6: Struktur Kontrol — Perulangan](#modul-6-struktur-kontrol--perulangan)
  - [Modul 7: Fungsi (Functions)](#modul-7-fungsi-functions)
  - [Modul 8: Array (Larik)](#modul-8-array-larik)
  - [Modul 9: String](#modul-9-string)
  - [Modul 10: Pointer](#modul-10-pointer)
  - [Modul 11: Struktur Data Bentukan (Struct, Union, Enum)](#modul-11-struktur-data-bentukan-struct-union-enum)
  - [Modul 12: Manajemen Memori Dinamis](#modul-12-manajemen-memori-dinamis)
  - [Modul 13: File Handling (Penanganan Berkas)](#modul-13-file-handling-penanganan-berkas)
  - [Modul 14: Preprocessor dan Macro](#modul-14-preprocessor-dan-macro)
  - [Modul 15: Struktur Data dengan C (Linked List, Stack, Queue)](#modul-15-struktur-data-dengan-c-linked-list-stack-queue)
  - [Modul 16: Algoritma Pengurutan dan Pencarian](#modul-16-algoritma-pengurutan-dan-pencarian)
  - [Modul 17: Rekursi Lanjutan dan Backtracking](#modul-17-rekursi-lanjutan-dan-backtracking)
  - [Modul 18: Manipulasi Bit (Bitwise Operations)](#modul-18-manipulasi-bit-bitwise-operations)
  - [Modul 19: Penanganan Kesalahan dan Debugging](#modul-19-penanganan-kesalahan-dan-debugging)
  - [Modul 20: Pemrograman Modular dan Multi-File](#modul-20-pemrograman-modular-dan-multi-file)
  - [Modul 21: Pustaka Standar C (Standard Library Deep Dive)](#modul-21-pustaka-standar-c-standard-library-deep-dive)
  - [Modul 22: Argumen Command Line](#modul-22-argumen-command-line)
  - [Modul 23: Pointer Lanjutan dan Function Pointer](#modul-23-pointer-lanjutan-dan-function-pointer)
  - [Modul 24: Struktur Data Lanjutan (Tree, Graph, Hash Table)](#modul-24-struktur-data-lanjutan-tree-graph-hash-table)
  - [Modul 25: Pemrograman Konkuren dan Multithreading](#modul-25-pemrograman-konkuren-dan-multithreading)
  - [Modul 26: Pemrograman Soket dan Jaringan](#modul-26-pemrograman-soket-dan-jaringan)
  - [Modul 27: Interaksi dengan Sistem Operasi](#modul-27-interaksi-dengan-sistem-operasi)
  - [Modul 28: Fitur Modern C (C11, C17, C23)](#modul-28-fitur-modern-c-c11-c17-c23)
  - [Modul 29: Best Practices, Coding Standards, dan Secure Coding](#modul-29-best-practices-coding-standards-dan-secure-coding)
  - [Modul 30: Proyek Akhir / Capstone Project](#modul-30-proyek-akhir--capstone-project)
- [Bagian B — Sumber Referensi Terbuka](#bagian-b--sumber-referensi-terbuka)
- [Bagian C — RPS dan Kurikulum Acuan](#bagian-c--rps-dan-kurikulum-acuan)

---

## Bagian A — Daftar Materi (Dasar → Lanjutan)

### 🟢 LEVEL DASAR (Fundamental)

---

### Modul 1: Pengenalan Bahasa C & Lingkungan Pengembangan

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 1.1 Sejarah dan Filosofi Bahasa C | Asal-usul (Dennis Ritchie, Bell Labs, 1972), hubungan dengan UNIX, mengapa C masih relevan |
| 1.2 Karakteristik dan Keunggulan C | Portabilitas, efisiensi, akses level rendah, pengaruh terhadap bahasa lain (C++, Java, Python) |
| 1.3 Proses Kompilasi | Tahapan: source code → preprocessor → compiler → assembler → linker → executable |
| 1.4 Instalasi Compiler | GCC (MinGW untuk Windows), Clang; pengenalan IDE (Code::Blocks, Dev-C++, VS Code) |
| 1.5 Program Pertama: Hello World | Struktur dasar program C: `#include`, `main()`, `return`, komentar (`//`, `/* */`) |
| 1.6 Kompilasi dan Eksekusi | Perintah `gcc`, opsi dasar (`-o`, `-Wall`), menjalankan executable |

---

### Modul 2: Variabel, Tipe Data, dan Konstanta

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 2.1 Konsep Variabel | Deklarasi, inisialisasi, aturan penamaan (identifier) |
| 2.2 Tipe Data Dasar | `int`, `float`, `double`, `char`, `void` |
| 2.3 Modifier Tipe Data | `short`, `long`, `long long`, `signed`, `unsigned` |
| 2.4 Ukuran Tipe Data | Operator `sizeof`, representasi di memori |
| 2.5 Konstanta | `#define`, `const`, literal (integer, floating-point, karakter, string) |
| 2.6 Escape Sequences | `\n`, `\t`, `\\`, `\'`, `\"`, `\0` |
| 2.7 Type Casting | Konversi tipe implisit dan eksplisit |

---

### Modul 3: Input/Output Dasar

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 3.1 Output dengan `printf()` | Format specifier: `%d`, `%f`, `%c`, `%s`, `%x`, `%o`, `%p`, `%ld`, `%lf` |
| 3.2 Input dengan `scanf()` | Membaca input pengguna, operator alamat (`&`), batasan dan gotcha |
| 3.3 Fungsi I/O Karakter | `getchar()`, `putchar()`, `gets()` (deprecated), `fgets()` |
| 3.4 Formatted Output | Lebar field, presisi, rata kiri/kanan, padding |
| 3.5 Buffer dan Flushing | Konsep buffer stdin, `fflush()`, membersihkan buffer input |

---

### Modul 4: Operator dan Ekspresi

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 4.1 Operator Aritmatika | `+`, `-`, `*`, `/`, `%` (modulus) |
| 4.2 Operator Relasional | `==`, `!=`, `>`, `<`, `>=`, `<=` |
| 4.3 Operator Logika | `&&`, `||`, `!` |
| 4.4 Operator Penugasan | `=`, `+=`, `-=`, `*=`, `/=`, `%=` |
| 4.5 Operator Increment/Decrement | `++`, `--` (prefix dan postfix) |
| 4.6 Operator Bitwise | `&`, `|`, `^`, `~`, `<<`, `>>` |
| 4.7 Operator Ternary (Kondisional) | `kondisi ? nilai_true : nilai_false` |
| 4.8 Operator Khusus | `sizeof`, `,` (comma), `&` (address-of), `*` (dereference) |
| 4.9 Precedence dan Associativity | Urutan evaluasi operator, penggunaan tanda kurung |

---

### Modul 5: Struktur Kontrol — Percabangan

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 5.1 Pernyataan `if` | Percabangan satu arah |
| 5.2 Pernyataan `if-else` | Percabangan dua arah |
| 5.3 Pernyataan `else if` (ladder) | Percabangan bertingkat |
| 5.4 `if` Bersarang (Nested) | Percabangan di dalam percabangan |
| 5.5 Pernyataan `switch-case` | Percabangan multi-arah, `break`, `default`, fall-through |
| 5.6 Operator Ternary sebagai Percabangan | Versi ringkas dari `if-else` |

---

### Modul 6: Struktur Kontrol — Perulangan

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 6.1 Perulangan `for` | Inisialisasi, kondisi, increment; variasi penggunaan |
| 6.2 Perulangan `while` | Loop dengan kondisi di awal |
| 6.3 Perulangan `do-while` | Loop dengan kondisi di akhir (minimal 1 kali eksekusi) |
| 6.4 Loop Bersarang (Nested Loop) | Perulangan di dalam perulangan; pola bintang, matriks |
| 6.5 Kendali Loop | `break`, `continue`, `goto` (dan mengapa `goto` jarang digunakan) |
| 6.6 Infinite Loop | Pola-pola infinite loop dan penggunaannya |

---

### 🟡 LEVEL MENENGAH (Intermediate)

---

### Modul 7: Fungsi (Functions)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 7.1 Konsep Fungsi | Deklarasi (prototipe), definisi, pemanggilan |
| 7.2 Parameter dan Argumen | Pass by value; formal vs actual parameter |
| 7.3 Nilai Kembalian (Return Value) | `return`, fungsi `void`, multiple return paths |
| 7.4 Scope Variabel | Local, global, block scope |
| 7.5 Storage Classes | `auto`, `static`, `extern`, `register` |
| 7.6 Rekursi | Konsep dasar, base case, stack frame; contoh: faktorial, Fibonacci, Tower of Hanoi |
| 7.7 Fungsi Inline | Keyword `inline` (C99+), kapan digunakan |

---

### Modul 8: Array (Larik)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 8.1 Array Satu Dimensi | Deklarasi, inisialisasi, akses elemen, iterasi |
| 8.2 Array Multi-Dimensi | Array 2D (matriks), array 3D; deklarasi dan akses |
| 8.3 Array dan Fungsi | Mengirim array ke fungsi, array sebagai parameter |
| 8.4 Variable Length Array (VLA) | VLA di C99; batasan dan peringatan |
| 8.5 Operasi pada Array | Pencarian linear, pencarian biner sederhana, pengurutan sederhana (bubble sort) |

---

### Modul 9: String

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 9.1 Representasi String dalam C | Array of `char`, null terminator (`\0`) |
| 9.2 Inisialisasi String | Literal string, array karakter, pointer ke string |
| 9.3 Fungsi String Standar (`<string.h>`) | `strlen`, `strcpy`, `strncpy`, `strcat`, `strncat`, `strcmp`, `strncmp`, `strchr`, `strstr`, `strtok` |
| 9.4 Input/Output String | `scanf` dengan `%s`, `fgets`, `puts`, `fputs` |
| 9.5 Array of Strings | Deklarasi dan manipulasi array 2D karakter |
| 9.6 Konversi String-Angka | `atoi`, `atof`, `strtol`, `strtod`, `sprintf`, `sscanf` |

---

### Modul 10: Pointer

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 10.1 Konsep Pointer | Alamat memori, operator `&` (address-of), operator `*` (dereference) |
| 10.2 Deklarasi dan Inisialisasi Pointer | Tipe pointer, pointer NULL |
| 10.3 Aritmetika Pointer | Increment, decrement, penjumlahan, pengurangan pointer |
| 10.4 Pointer dan Array | Hubungan pointer-array, traversal array dengan pointer |
| 10.5 Pointer dan String | Pointer ke string literal, manipulasi string dengan pointer |
| 10.6 Pointer ke Pointer | Double pointer (`**`), penggunaan praktis |
| 10.7 Pass by Reference (Simulasi) | Mengirim pointer ke fungsi untuk mengubah nilai variabel |
| 10.8 Pointer `void` | Generic pointer, casting |
| 10.9 Pointer `const` | `const int *p`, `int * const p`, `const int * const p` |

---

### Modul 11: Struktur Data Bentukan (Struct, Union, Enum)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 11.1 Struktur (`struct`) | Definisi, deklarasi variabel struct, akses anggota (`.`) |
| 11.2 Struct dan Fungsi | Mengirim struct ke fungsi (by value dan by pointer `->`) |
| 11.3 Array of Struct | Kumpulan data terstruktur |
| 11.4 Nested Struct | Struct di dalam struct |
| 11.5 Pointer ke Struct | Operator arrow (`->`) |
| 11.6 `typedef` | Membuat alias tipe data, konvensi penamaan |
| 11.7 Union | Definisi, perbedaan dengan struct, penggunaan memori |
| 11.8 Enumerasi (`enum`) | Pendefinisian konstanta bernama, underlying type |
| 11.9 Bit Fields | Pengaturan lebar bit dalam struct |

---

### Modul 12: Manajemen Memori Dinamis

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 12.1 Stack vs Heap | Perbedaan alokasi memori otomatis dan manual |
| 12.2 `malloc()` | Alokasi memori, casting hasil, pengecekan NULL |
| 12.3 `calloc()` | Alokasi + inisialisasi nol |
| 12.4 `realloc()` | Mengubah ukuran memori yang telah dialokasikan |
| 12.5 `free()` | Melepaskan memori, mencegah memory leak |
| 12.6 Common Pitfalls | Dangling pointer, double free, memory leak, buffer overflow, use-after-free |
| 12.7 Array Dinamis | Alokasi array satu dan dua dimensi secara dinamis |
| 12.8 Struct Dinamis | Membuat linked data menggunakan pointer dan alokasi dinamis |

---

### Modul 13: File Handling (Penanganan Berkas)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 13.1 Konsep File I/O | Stream, file pointer (`FILE *`) |
| 13.2 Membuka dan Menutup File | `fopen()` (mode: `r`, `w`, `a`, `r+`, `w+`, `a+`, `rb`, `wb`), `fclose()` |
| 13.3 Membaca File | `fgetc()`, `fgets()`, `fscanf()`, `fread()` |
| 13.4 Menulis ke File | `fputc()`, `fputs()`, `fprintf()`, `fwrite()` |
| 13.5 Posisi dalam File | `fseek()`, `ftell()`, `rewind()`, `feof()` |
| 13.6 File Teks vs File Biner | Perbedaan mode dan operasi |
| 13.7 Penanganan Error File | `ferror()`, `perror()`, `errno` |
| 13.8 Operasi Direktori (Pengantar) | Pengenalan fungsi OS-specific untuk manipulasi direktori |

---

### Modul 14: Preprocessor dan Macro

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 14.1 Directive `#include` | Header file standar vs user-defined; `< >` vs `" "` |
| 14.2 Directive `#define` | Object-like macro dan function-like macro |
| 14.3 Macro dengan Parameter | Macro vs fungsi, efek samping, penggunaan tanda kurung |
| 14.4 Operator Preprocessor | `#` (stringification), `##` (token pasting) |
| 14.5 Kompilasi Kondisional | `#if`, `#ifdef`, `#ifndef`, `#elif`, `#else`, `#endif` |
| 14.6 Include Guards | Mencegah multiple inclusion: `#ifndef` / `#pragma once` |
| 14.7 Predefined Macros | `__FILE__`, `__LINE__`, `__DATE__`, `__TIME__`, `__func__` |
| 14.8 Directive `#pragma` | `#pragma once`, `#pragma pack`, compiler-specific |
| 14.9 Directive `#error` dan `#warning` | Menghasilkan pesan kesalahan saat kompilasi |

---

### 🔴 LEVEL LANJUTAN (Advanced)

---

### Modul 15: Struktur Data dengan C (Linked List, Stack, Queue)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 15.1 Singly Linked List | Definisi node, operasi: insert, delete, traverse, search |
| 15.2 Doubly Linked List | Node dengan pointer prev dan next |
| 15.3 Circular Linked List | Variasi singly dan doubly circular |
| 15.4 Stack (Tumpukan) | Implementasi dengan array dan linked list; operasi push, pop, peek |
| 15.5 Queue (Antrian) | Implementasi dengan array dan linked list; enqueue, dequeue |
| 15.6 Circular Queue dan Priority Queue | Variasi antrian khusus |
| 15.7 Aplikasi Struktur Data | Evaluasi ekspresi (postfix), balancing parenthesis, BFS |

---

### Modul 16: Algoritma Pengurutan dan Pencarian

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 16.1 Bubble Sort | Konsep, implementasi, analisis kompleksitas O(n²) |
| 16.2 Selection Sort | Konsep, implementasi |
| 16.3 Insertion Sort | Konsep, implementasi |
| 16.4 Merge Sort | Divide and conquer, implementasi rekursif, O(n log n) |
| 16.5 Quick Sort | Pivoting, partisi, implementasi, best/worst case |
| 16.6 Pencarian Linear | Implementasi sederhana |
| 16.7 Pencarian Biner (Binary Search) | Prasyarat sorted array, implementasi iteratif dan rekursif |
| 16.8 Perbandingan Algoritma | Tabel kompleksitas waktu dan ruang |
| 16.9 `qsort()` dan `bsearch()` | Fungsi sort/search dari `<stdlib.h>`, penggunaan function pointer |

---

### Modul 17: Rekursi Lanjutan dan Backtracking

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 17.1 Rekursi vs Iterasi | Perbandingan performa, stack overflow, tail recursion |
| 17.2 Divide and Conquer | Paradigma pemecahan masalah; contoh: merge sort, binary search |
| 17.3 Backtracking | Konsep dasar, pruning; contoh: N-Queens, Sudoku solver |
| 17.4 Memoization | Caching hasil komputasi; dynamic programming sederhana |

---

### Modul 18: Manipulasi Bit (Bitwise Operations)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 18.1 Representasi Biner | Bilangan biner, oktal, heksadesimal dalam C |
| 18.2 Operator Bitwise Lanjutan | Teknik: set bit, clear bit, toggle bit, check bit |
| 18.3 Bit Masking | Penggunaan mask untuk ekstraksi dan manipulasi bit tertentu |
| 18.4 Shift Operations | Left shift, right shift, arithmetic vs logical shift |
| 18.5 Aplikasi Bitwise | Flag system, permission bits, kompresi data sederhana, enkripsi XOR |
| 18.6 Bit Fields dalam Struct | Menghemat memori dengan pengaturan lebar bit |

---

### Modul 19: Penanganan Kesalahan dan Debugging

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 19.1 Return Code Convention | Konvensi nilai kembalian untuk menandai sukses/gagal |
| 19.2 `errno` dan `<errno.h>` | Kode error standar, `perror()`, `strerror()` |
| 19.3 `assert()` | Assertion untuk debugging, `<assert.h>`, NDEBUG |
| 19.4 `setjmp` / `longjmp` | Non-local jumps untuk penanganan error (pengantar) |
| 19.5 Signal Handling | `<signal.h>`, `signal()`, `raise()`, menangani SIGSEGV, SIGINT |
| 19.6 Debugging dengan GDB | Breakpoint, step, print, backtrace, watchpoint |
| 19.7 Valgrind | Mendeteksi memory leak, akses ilegal, uninitialized values |
| 19.8 Sanitizer | AddressSanitizer (ASan), UndefinedBehaviorSanitizer (UBSan), penggunaan dengan GCC/Clang |

---

### Modul 20: Pemrograman Modular dan Multi-File

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 20.1 Header Files | Membuat `.h` sendiri, deklarasi vs definisi, include guards |
| 20.2 File Implementasi | Memisahkan deklarasi (`.h`) dan implementasi (`.c`) |
| 20.3 Kompilasi Terpisah | Mengompilasi beberapa file `.c`, linking object files |
| 20.4 `extern` dan Linkage | External linkage, internal linkage (`static` di file scope) |
| 20.5 Makefile | Penulisan Makefile dasar, target, dependency, variabel, `make clean` |
| 20.6 CMake (Pengantar) | Pengenalan CMake untuk proyek lintas platform |
| 20.7 Static dan Shared Libraries | Membuat dan menggunakan `.a` (static) dan `.so`/`.dll` (shared) |

---

### Modul 21: Pustaka Standar C (Standard Library Deep Dive)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 21.1 `<stdio.h>` | I/O lengkap: `sprintf`, `snprintf`, `sscanf`, `tmpfile` |
| 21.2 `<stdlib.h>` | `atoi`, `strtol`, `rand`, `srand`, `abs`, `exit`, `atexit`, `system` |
| 21.3 `<string.h>` | Fungsi string dan memori: `memcpy`, `memmove`, `memset`, `memcmp` |
| 21.4 `<math.h>` | Fungsi matematika: `pow`, `sqrt`, `ceil`, `floor`, `fabs`, `log`, trigonometri |
| 21.5 `<ctype.h>` | Klasifikasi karakter: `isalpha`, `isdigit`, `toupper`, `tolower` |
| 21.6 `<time.h>` | `time`, `clock`, `difftime`, `strftime`, `localtime`, benchmarking |
| 21.7 `<stdint.h>` dan `<inttypes.h>` | Tipe integer dengan lebar tetap: `int8_t`, `uint32_t`, `PRId64` |
| 21.8 `<stdbool.h>` | Tipe `bool`, `true`, `false` (C99+) |
| 21.9 `<stdarg.h>` | Fungsi variadic: `va_list`, `va_start`, `va_arg`, `va_end` |
| 21.10 `<limits.h>` dan `<float.h>` | Batas nilai tipe data: `INT_MAX`, `CHAR_BIT`, `FLT_EPSILON` |

---

### Modul 22: Argumen Command Line

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 22.1 `argc` dan `argv` | Membaca argumen dari terminal |
| 22.2 Parsing Argumen | Mengkonversi string argumen, validasi |
| 22.3 Pattern Penggunaan | Flag sederhana, opsi dengan nilai |
| 22.4 `getopt()` (POSIX) | Parsing argumen terstruktur (pengantar) |

---

### Modul 23: Pointer Lanjutan dan Function Pointer

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 23.1 Function Pointer | Deklarasi, inisialisasi, pemanggilan; typedef untuk function pointer |
| 23.2 Callback Functions | Pattern callback; contoh: `qsort()` dengan comparator |
| 23.3 Array of Function Pointers | Jump table, dispatch table |
| 23.4 Pointer ke Struct yang Mengandung Function Pointer | Simulasi OOP sederhana di C |
| 23.5 Opaque Pointer | Information hiding, abstract data type |
| 23.6 Restrict Pointer (`restrict`) | Keyword C99 untuk optimasi compiler |
| 23.7 Flexible Array Member | `struct` dengan array tanpa ukuran di akhir (C99) |

---

### Modul 24: Struktur Data Lanjutan (Tree, Graph, Hash Table)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 24.1 Binary Tree | Representasi node, traversal (inorder, preorder, postorder) |
| 24.2 Binary Search Tree (BST) | Insert, search, delete, balancing dasar |
| 24.3 Heap (Binary Heap) | Min-heap, max-heap; heapify, heap sort |
| 24.4 Hash Table | Fungsi hash, collision handling (chaining, open addressing) |
| 24.5 Graph | Representasi (adjacency matrix, adjacency list) |
| 24.6 Graph Traversal | BFS dan DFS implementasi di C |
| 24.7 Trie (Prefix Tree) | Implementasi dasar, penggunaan untuk string matching |

---

### Modul 25: Pemrograman Konkuren dan Multithreading

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 25.1 Konsep Concurrency | Thread vs process, race condition, critical section |
| 25.2 POSIX Threads (`pthread`) | `pthread_create`, `pthread_join`, `pthread_exit` |
| 25.3 Sinkronisasi | Mutex (`pthread_mutex`), semaphore, condition variable |
| 25.4 Thread Safety | Reentrant functions, thread-local storage |
| 25.5 C11 Threads (`<threads.h>`) | `thrd_create`, `mtx_lock`, portabel lintas platform |
| 25.6 Atomic Operations (`<stdatomic.h>`) | Operasi atomik, memory ordering (C11) |
| 25.7 Deadlock dan Starvation | Penyebab, deteksi, dan pencegahan |

---

### Modul 26: Pemrograman Soket dan Jaringan

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 26.1 Konsep Jaringan | Model TCP/IP, protokol TCP vs UDP |
| 26.2 Berkeley Sockets API | `socket()`, `bind()`, `listen()`, `accept()`, `connect()` |
| 26.3 Server TCP Sederhana | Membuat server yang menerima koneksi klien |
| 26.4 Klien TCP Sederhana | Mengirim dan menerima data dari server |
| 26.5 Server UDP | Komunikasi connectionless |
| 26.6 I/O Multiplexing | `select()`, `poll()`, pengantar `epoll` |
| 26.7 Serialisasi Data | Byte order (endianness), `htons()`, `htonl()`, `ntohs()`, `ntohl()` |

---

### Modul 27: Interaksi dengan Sistem Operasi

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 27.1 System Calls | Perbedaan library call vs system call |
| 27.2 Proses | `fork()`, `exec()`, `wait()`, `getpid()` (POSIX) |
| 27.3 Inter-Process Communication (IPC) | Pipe, named pipe (FIFO), shared memory, message queue |
| 27.4 Memory-Mapped Files | `mmap()`, `munmap()` |
| 27.5 Environment Variables | `getenv()`, `setenv()` |
| 27.6 Sinyal (Signals) | Penanganan sinyal lanjutan, `sigaction()` |

---

### Modul 28: Fitur Modern C (C11, C17, C23)

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 28.1 Evolusi Standar C | C89/C90 → C99 → C11 → C17 → C23 |
| 28.2 Fitur C99 | `//` comments, `_Bool`/`<stdbool.h>`, VLA, `inline`, `restrict`, designated initializers, `<stdint.h>`, compound literals |
| 28.3 Fitur C11 | `_Generic`, `_Static_assert`, `_Noreturn`, anonymous struct/union, `<threads.h>`, `<stdatomic.h>`, `aligned_alloc`, bounds-checking (`__STDC_LIB_EXT1__`) |
| 28.4 Fitur C17 | Bug-fix release, klarifikasi teknis dari C11 |
| 28.5 Fitur C23 | `nullptr`, `constexpr`, `auto` type inference, `typeof` / `typeof_unqual`, binary literals (`0b`), `#embed`, `_BitInt(N)`, `[[attributes]]`, empty initializer `{}` |
| 28.6 Portabilitas dan Kompatibilitas | Flag compiler (`-std=c11`, `-std=c23`), feature test macros |

---

### Modul 29: Best Practices, Coding Standards, dan Secure Coding

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 29.1 Coding Style | Konvensi penamaan, indentasi, komentar; gaya K&R, GNU, Linux kernel |
| 29.2 Compiler Warnings | `-Wall`, `-Wextra`, `-Wpedantic`, `-Werror`; membaca dan memperbaiki peringatan |
| 29.3 Static Analysis | Clang Static Analyzer, Cppcheck, PC-lint |
| 29.4 Secure Coding (Pengantar) | Hindari `gets()`, gunakan `snprintf()` daripada `sprintf()`, validasi input |
| 29.5 SEI CERT C | Aturan keamanan kode C dari CERT/CMU |
| 29.6 MISRA C (Pengantar) | Standar untuk safety-critical embedded systems |
| 29.7 Unit Testing | Framework: CUnit, Unity, Check; menulis dan menjalankan test |
| 29.8 Documentation | Doxygen, menulis dokumentasi kode terstruktur |
| 29.9 Version Control | Git dasar untuk proyek C |

---

### Modul 30: Proyek Akhir / Capstone Project

| Sub-Topik | Deskripsi |
|-----------|-----------|
| 30.1 Ide Proyek Tingkat Dasar | Kalkulator, sistem nilai mahasiswa, permainan tebak angka |
| 30.2 Ide Proyek Tingkat Menengah | Phonebook (struct + file), text editor sederhana, database mini dengan file |
| 30.3 Ide Proyek Tingkat Lanjutan | Shell sederhana (mini-shell), HTTP server minimalis, implementasi allocator (custom `malloc`) |
| 30.4 Metodologi | Perencanaan, desain modular, implementasi bertahap, testing, dokumentasi |

---

## Bagian B — Sumber Referensi Terbuka

Referensi berikut dipilih dari materi terbuka/umum di web (per April 2026). Level bersifat perkiraan: **Dasar** (sintaks, tipe, kontrol alur), **Menengah** (pointer, struktur, modul, pustaka), **Lanjutan** (semantik mendalam, standar modern, toolchain, optimasi).

### Referensi Berbahasa Inggris

| No | Sumber | Deskripsi | Level | URL |
|----|--------|-----------|-------|-----|
| 1 | **cppreference.com (C)** | Referensi sintaks & pustaka standar (C89–C23) | Dasar–Lanjut | https://en.cppreference.com/w/c |
| 2 | **Learn-C.org** | Tutorial interaktif singkat di browser | Dasar | https://www.learn-c.org/ |
| 3 | **The Little Book of C** | Pengantar ringkas, instalasi kompilator | Dasar | https://little-book-of.github.io/c/books/en-US/book.html |
| 4 | **W3Schools — C Tutorial** | Ringkasan sintaks dan contoh singkat per topik | Dasar | https://www.w3schools.com/c/index.php |
| 5 | **Programiz — C Programming** | Modul per topik dengan contoh kode | Dasar–Menengah | https://www.programiz.com/c-programming |
| 6 | **GeeksforGeeks — C Programming** | Artikel algoritme dan pemrograman C | Dasar–Menengah | https://www.geeksforgeeks.org/c-programming-language/ |
| 7 | **TutorialsPoint — C Programming** | Tutorial terstruktur per topik | Dasar–Menengah | https://www.tutorialspoint.com/cprogramming/index.htm |
| 8 | **Harvard CS50x — Week 1 (C)** | Kuliah terstruktur: kompilator, tipe, kontrol alur | Dasar (kurikulum) | https://cs50.harvard.edu/x/2026/weeks/1/ |
| 9 | **Beej's Guide to C Programming** | Penjelasan mendalam berorientasi ISO C | Menengah–Lanjut | https://beej.us/guide/bgc/html/index.html |
| 10 | **Beej's Guide to Network Programming** | Pemrograman soket/jaringan dengan C | Lanjut | https://beej.us/guide/bgnet/html/ |
| 11 | **The GNU C Reference Manual** | Referensi implementasi GNU/GCC | Menengah–Lanjut | https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html |
| 12 | **Using the GNU Compiler Collection (GCC)** | Dokumentasi resmi GCC (opsi, peringatan, ekstensi) | Lanjut (toolchain) | https://gcc.gnu.org/onlinedocs/gcc/index.html |
| 13 | **Modern C (Jens Gustedt)** | Buku teks bebas (C modern/C23) | Lanjut | https://gustedt.gitlabpages.inria.fr/modern-c/ |
| 14 | **SEI CERT C Coding Standard** | Aturan secure coding dari CERT/CMU | Lanjut (keamanan) | https://wiki.sei.cmu.edu/confluence/display/c/SEI+CERT+C+Coding+Standard |
| 15 | **Valgrind Documentation** | Dokumentasi tool deteksi memory leak | Lanjut (debugging) | https://valgrind.org/docs/manual/manual.html |
| 16 | **GDB Documentation** | Dokumentasi GNU Debugger | Lanjut (debugging) | https://sourceware.org/gdb/current/onlinedocs/gdb/ |

### Referensi Berbahasa Indonesia

| No | Sumber | Deskripsi | Level | URL |
|----|--------|-----------|-------|-----|
| 1 | **Petani Kode — Tutorial C** | Seri artikel (I/O, kontrol, array, fungsi, pointer, file, preprocessor) | Dasar–Menengah | https://petanikode.com/tutorial/c |
| 2 | **Dicoding Blog — Belajar Bahasa C** | Artikel dasar-dasar bahasa C untuk pemula | Dasar | https://www.dicoding.com/blog/belajar-bahasa-pemrograman-c-untuk-pemula/ |
| 3 | **CodePolitan — Tutorial C** | Tutorial bahasa C berbahasa Indonesia | Dasar–Menengah | https://www.codepolitan.com/kategori/c |
| 4 | **Modul PENS (Politeknik Elektronika Negeri Surabaya)** | Modul kuliah pemrograman C | Dasar–Menengah | (lihat repositori kampus) |

### Buku Referensi Klasik (untuk Bacaan Mandiri)

| No | Buku | Penulis | Catatan |
|----|------|---------|---------|
| 1 | *The C Programming Language* (K&R) | Brian Kernighan & Dennis Ritchie | Buku klasik definitif untuk C (edisi 2, ANSI C) |
| 2 | *C Programming: A Modern Approach* | K. N. King | Referensi lengkap untuk pembelajaran akademik (C89/C99) |
| 3 | *Modern C* | Jens Gustedt | Buku modern gratis (tersedia daring), membahas C11–C23 |
| 4 | *Expert C Programming: Deep C Secrets* | Peter van der Linden | Topik lanjutan dan "gotcha" bahasa C |
| 5 | *21st Century C* | Ben Klemens | Praktik modern pengembangan C (toolchain, testing, library) |
| 6 | *C Interfaces and Implementations* | David R. Hanson | Desain antarmuka dan implementasi struktur data di C |

---

## Bagian C — RPS dan Kurikulum Acuan

Dokumen berikut dipilih dari hasil pencarian terbuka (2026). Yang bertanda **OBE** secara eksplisit memuat pemetaan CPL, CPMK, dan Sub-CPMK (atau setara) selaras prinsip RPS berbasis capaian.

1. **Universitas Negeri Surabaya (UNESA) — RPS Praktikum Pemrograman Dasar** (D4 Manajemen Informatika; materi berpusat pada algoritme dan pemrograman prosedural, termasuk **bahasa C**).  
   https://sindig.unesa.ac.id/rps-pdf/d4-manajemen-informatika/prak-pemrograman-dasar.pdf

2. **Universitas Sebelas Maret (UNS) — RPS Pemrograman Dasar** (Teknik Elektro, kode EE0107-19; gabungan pemahaman dasar dan kegiatan **laboratorium** dengan materi **C/C++**, algoritme, struktur kontrol, fungsi, larik, pointer).  
   https://elektro.ft.uns.ac.id/wp-content/uploads/2020/08/RPS_EE0107-19_Pemrograman-Dasar.pdf

3. **Universitas Wahid Hasyim (UNWAHAS) — RPS Praktikum Algoritma dan Pemrograman** (JTI2403, 1 SKS; **OBE**: CPL prodi, CPMK, Sub-CPMK, rencana asesmen, dan catatan selaras SN-Dikti). Perhatikan: contoh implementasi praktikum memakai **C++/Dev C++** — berguna sebagai **teladan struktur RPS berbasis capaian** yang dapat diadaptasi ke praktikum **C**.  
   https://simpel.teknik.unwahas.ac.id/rps/191

---

## Peta Kesesuaian Modul → Minggu Perkuliahan (Contoh 16 Minggu)

Berikut pemetaan contoh untuk perkuliahan 16 minggu (1 semester), dengan asumsi fokus pada materi dasar-menengah:

| Minggu | Modul | Topik Utama |
|--------|-------|-------------|
| 1 | 1 | Pengenalan Bahasa C & Lingkungan |
| 2 | 2, 3 | Variabel, Tipe Data, I/O |
| 3 | 4 | Operator dan Ekspresi |
| 4 | 5 | Percabangan |
| 5 | 6 | Perulangan |
| 6 | 7 | Fungsi |
| 7 | 8 | Array |
| 8 | — | **UTS (Ujian Tengah Semester)** |
| 9 | 9 | String |
| 10 | 10 | Pointer |
| 11 | 11 | Struct, Union, Enum |
| 12 | 12 | Manajemen Memori Dinamis |
| 13 | 13 | File Handling |
| 14 | 14 | Preprocessor dan Macro |
| 15 | 15 | Struktur Data (Linked List, Stack, Queue) |
| 16 | — | **UAS (Ujian Akhir Semester)** |

> **Catatan:** Modul 16–30 (level lanjutan) dapat digunakan untuk semester lanjutan, mata kuliah Pemrograman Lanjut, atau sebagai bahan pengayaan mandiri.

---

*Daftar ini disusun berdasarkan kurikulum universitas, referensi standar industri, dan sumber terbuka. Dapat diperluas sesuai kebutuhan prodi dan kebijakan institusi.*
