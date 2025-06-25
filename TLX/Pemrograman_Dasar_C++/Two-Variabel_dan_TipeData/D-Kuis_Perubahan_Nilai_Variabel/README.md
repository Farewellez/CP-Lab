Kuis
Mari kita berlatih membaca beberapa program C++ untuk memantapkan pemahaman kita terhadap alur perubahan nilai variabel.

Petunjuk
Ingat poin-poin penting berikut yang dapat membantu kita untuk mengerjakan latihan:

Perintah-perintah pada bahasa C++ dijalankan secara berurutan.

Cara membaca operator assignment (=):
- nilai dari ekspresi di sebelah kanan tanda =,
- disimpan ke dalam variabel di sebelah kiri tanda =.

1. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    x = x + 1;
    cout << x << endl;   
}
```
2. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    x = x + x;
    cout << x << endl;   
}
```

3. Apakah keluaran dari program berikut?

```
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 4;
    x = y;
    y = x;
    cout << x << " " << y << endl;   
}
```
a. 3 4

b. 4 3

c. 3 3

d. 4 4