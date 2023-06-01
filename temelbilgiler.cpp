#include <iostream>

int main()
{
        std ::cout << "Merhaba Dünya!\n";
        return 0;
}

/*
1. satır önişlemci yönergesi adı verilen özel bir satır türüdür.
Bu önişlemci yönergesi konsoldan metin okumamıza ve yazmamıza izin
veren C++ standart kitaplığının bir parçası olan iostream kitaplığının
içeriğini kullanmak istediğimizi belirtir.5.satırda std ::cout kullanmak 
için bu satıra ihtiyacımız var.

2. satır boştur ve derleyici tarafından yok sayılır.

3. satır derleyiciye main adında bir fonksiyon yazacağımızı söyler.

4. ve 7. satırlar derleyiciye hangi satırların ana işlevin parçası 
olduğunu söyler

5.satır main işlevindeki ilk ifadedir ve programımızı çalıştırdığımızda 
yürütülecek ilk ifadedir.std::cout("karakter çıktısı" anlamına gelir)
<< operatör çıktısı alınacak konsola harf veya sayı göndermemize izin
verir.

6. satır bir dönüş ifadesidir.Yürütülebilir bir program çalışmayı bitirdiğinde,
program başarılı bir şekilde çalışığ çalışmadığını belirtmek için
işletim sistemine bir değer gönderir.
İşletim sistemine 0 değeri döndürür,bu da "her şey yolunda gitti"
anlamına gerlir
*/