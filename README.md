# digispark_wifi_stealer
Arduino tabanlı Digispark kullanarak bilgisayarınızdaki kayıtlı Wi-Fi ağlarının SSID ve şifre bilgilerini bir FTP sunucusuna aktarır.
Using Arduino-based Digispark, it transfers the SSID and password information of registered Wi-Fi networks on your computer to an FTP server.

# Dil/Language

[Türkçe](https://github.com/ahmkrby/digispark_wifi_stealer/blob/main/README.md#nas%C4%B1l-kullan%C4%B1l%C4%B1r)

[English](https://github.com/ahmkrby/digispark_wifi_stealer/blob/main/README.md#how-to-use-it)


# Nasıl kullanılır?
*[Arduino IDE](https://www.arduino.cc/en/software) indirin.

*Türkçe klavye desteği için [Kütüphaneyi](https://akademi.robolinkmarket.com/wp-content/uploads/2021/02/DigisparkKeyboard-master.zip) indirin.

*Arduino IDE içerisinde Dosya>Tercihler kısmından Ek kart yöneticisi URL'leri kısmına `http://drazzy.com/package_drazzy.com_index.json` adresini ekleyiniz.

<img width="679" alt="Link_ekleme" src="https://github.com/user-attachments/assets/4ec44907-44aa-4804-8079-c11ab0f7aa56">

*Repo içerisinde bulunan .ino uzantılı arduino kodunu açınız.

*Görselde işaretlenmiş alandaki ilgili yerlere sunucunuza bağlanmak için gerekli verileri giriniz.

<img width="679" alt="FTP_Baglantisi" src="https://github.com/user-attachments/assets/cd5e4ee2-d806-4978-b2b8-810d95ff4338">

*FTP bilgilerini girmiş olduğunuz sunucuya kendi yönteminiz ile giriniz.

*Girmiş olduğunuz bilgiler ile giriş yaptığınızda açılan konum içerisinde `passwd` adında bir klasör oluşturun. Şifreler bu klasörde birikecektir.

<img width="478" alt="passwd_folder" src="https://github.com/user-attachments/assets/293b7f83-309b-4ce4-9123-e184e89332ac">

*Arduino IDE'ye geri dönün.

*Eskiz>Kütüphane ekle>.ZIP Kütüphanesi Ekle kısmından indirdiğiniz zip dosyasını seçiniz.

*Araçlar>Kartlar Sekmesinden ATTinyCore içerisinde kullanmış olduğunuz digispark modelini seçiniz. (Genellikle ATTiny85 kullanılır.)

*Sol üstte bulunan Yükle butonuna bastıktan sonra 60 saniye içerisinde digispark'ınızı takın ve yüklemenin tamamlanmasını bekleyin.


# How to use it?

*Download [Arduino IDE](https://www.arduino.cc/en/software).

*In Arduino IDE, in File>Preferences section, add `http://drazzy.com/package_drazzy.com_index.json` to the Additional card manager URLs section.

<img width="679" alt="Link_ekleme" src="https://github.com/user-attachments/assets/4ec44907-44aa-4804-8079-c11ab0f7aa56">

*Open the arduino code with .ino extension in the repo.

*Enter the necessary data to connect to your server in the relevant places in the area marked in the image.

<img width="679" alt="FTP_Baglantisi" src="https://github.com/user-attachments/assets/cd5e4ee2-d806-4978-b2b8-810d95ff4338">

*Enter the server where you entered the FTP information with your own method.

*Create a folder named `passwd` in the location opened when you log in with the information you entered. Passwords will accumulate in this folder.

<img width="478" alt="passwd_folder" src="https://github.com/user-attachments/assets/293b7f83-309b-4ce4-9123-e184e89332ac">

*Go back to Arduino IDE.

*Delete first line.

*Select the digispark model you used in ATTinyCore from Tools>Cards Tab. (Usually ATTiny85 is used.)

*After pressing the Install button on the top left, insert your digispark within 60 seconds and wait for the installation to complete.
