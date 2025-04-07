# buton-led-kontrol ![Wokwi CI](https://github.com/robotdevre/led-asenkron-kontrol/actions/workflows/wokwi.yml/badge.svg)

Bu proje, Arduino Uno kartı ile bir buton yardımıyla LED kontrolünü sağlar. Butona basıldığında LED yanar, bırakıldığında söner. `INPUT_PULLUP` özelliği kullanılarak harici pull-up direncine ihtiyaç duyulmaz. Başlangıç seviyesi Arduino uygulaması için uygundur.

---

## 🔧 Kullanılan Malzemeler

- Arduino Uno  
- 1 x LED (Kırmızı)  
- 1 x 220 Ohm direnç  
- 1 x Buton  
- Jumper kablolar  

---

## 🎯 Proje Amacı

- `digitalRead()` fonksiyonunu kullanarak dijital giriş okuma  
- `INPUT_PULLUP` ile dahili pull-up direncini etkinleştirme  
- Butonla LED kontrolü sağlama  
- Temel giriş/çıkış mantığını kavrama  

---

## 📷 Devre Şeması

📁 `diagram.json` dosyasında Wokwi uyumlu devre şeması bulunmaktadır.  
🔗 [Projeyi Wokwi'de görmek için tıklayın](https://wokwi.com)

---

## 💡 Kod

```cpp
const int ledPin = 13;
const int buttonPin = 7;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Dahili pull-up direnci etkin
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { // Butona basıldıysa
    digitalWrite(ledPin, HIGH); // LED yanar
  } else {
    digitalWrite(ledPin, LOW); // LED söner
  }
}
``` 
---

## 📫 Benimle İletişime Geç / Takip Et

Eğer proje hakkında bir fikrin varsa, soruların olursa ya da sadece selam vermek istersen; aşağıdaki kanallardan bana ulaşabilir ya da sosyal medya hesaplarımdan takip edebilirsin:

- 📧 [E-posta](mailto:info@robotdevre.com)  
- 📷 [Instagram](https://www.instagram.com/robotdevre/)  
- 🌐 [Web Sitesi](https://robotdevre.com/)  
- 🎥 [YouTube](https://www.youtube.com/@robotdevre)  
- 💼 [LinkedIn](https://www.linkedin.com/in/ugur-kerim-sirke/)  
- 🐦 [X (Twitter)](https://x.com/robotdevre)
