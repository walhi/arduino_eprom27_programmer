# Программатор для EPROM 27 серии (16-512) на Arduino

*Скачивайте архив с вкладки "Releases". Там находится GUI приложение и скетч для arduino*

Список поддерживаемых микросхем (не все микросхемы протестированы):

 * 27C16 (connects from 3 to 26 leg DIP28 socket)
 * 27C32 (connects from 3 to 26 leg DIP28 socket)
 * 27C64
 * 27C128
 * 27C256
 * 27C512

Перед прошивкой уточните напряжение программирования для вашей микросхемы в datasheet'е! 

# Схема
Изначальный проект базировался на проекте: <https://github.com/bouletmarc/BMBurner>
Этот проект является переработанной версией: <https://github.com/walhi/arduino_eprom27_programmer>

Принципиальная схема

![Schematic](https://github.com/Radionews/arduino_eprom27_programmer/blob/master/imgs/sch.png)

Внешний вид

![PCB](https://github.com/Radionews/arduino_eprom27_programmer/blob/master/imgs/pcb.png)

Файлы для производства платы ледат в папке gerber. Исходники проекта доступны тут: <https://oshwlab.com/naym1993/walhi_eeprom_prog>

Список компонентов можно взять в файле 27.pdf
# Software

Управляющая программа взята с оригинального репозитория.

Функции:

 * Чтение чипа
 * Запись чипа
 * Верификация и проверка чипа на запись (no bits to be set to 1)
 * Контроль напряжения программирования (for AVR in TQFP case)

![GUI on Windows 10](https://github.com/Radionews/arduino_eprom27_programmer/blob/master/imgs/win.png)

Приложение требует Windows 7 и выше.

![GUI on Ubuntu Mate](https://github.com/Radionews/arduino_eprom27_programmer/blob/master/imgs/ubuntu_mate.png)
