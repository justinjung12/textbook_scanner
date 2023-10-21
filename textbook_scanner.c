
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int mondayb = 3;
int tuesdayb = 4;
int wendsdayb = 5;
int thursdayb = 6;
int fridayb = 7;
int start = 0;
int infraredone = 8;
int infraredtwo = 9;
int infraredthree = 10;
int infraredfour = 11;
char textbook;
char whatbutton;
int okcheck = 0;

int Mondayoneclass = 0;
int Mondaytwoclass = 0;
int Mondaythreeclass = 0;
int Mondayfourclass = 0;
int Mondayfiveclass = 0;
int Mondaysixclass = 0;

int Tuesdayoneclass = 0;
int Tuesdaytwoclass = 0;
int Tuesdaythreeclass = 0;
int Tuesdayfourclass = 0;
int Tuesdayfiveclass = 0;
int Tuesdaysixclass = 0;
int Tuesdaysevenclass = 0;

int Wednesdayoneclass = 0;
int Wednesdaytwoclass = 0;
int Wednesdaythreeclass = 0;
int Wednesdayfourclass = 0;
int Wednesdayfiveclass = 0;
int Wednesdaysixclass = 0;

int Thursdayoneclass = 0;
int Thursdaytwoclass = 0;
int Thursdaythreeclass = 0;
int Thursdayfourclass = 0;
int Thursdayfiveclass = 0;
int Thursdaysixclass = 0;
int Thursdaysevenclass = 0;

int fridayoneclass = 0;
int fridaytwoclass = 0;
int fridaythreeclass = 0;
int fridayfourclass = 0;
int fridayfiveclass = 0;
int fridaysixclass = 0;

int oneclassone;
int oneclasstwo;
int oneclassthree;
int oneclassfour;
int twoclassone;
int twoclasstwo;
int twoclassthree;
int twoclassfour;
int threeclassone;
int threeclasstwo;
int threeclassthree;
int threeclassfour;
int fourclassone;
int fourclasstwo;
int fourclassthree;
int fourclassfour;
int fiveclassone;
int fiveclasstwo;
int fiveclassthree;
int fiveclassfour;
int sixclassone;
int sixclasstwo;
int sixclassthree;
int sixclassfour;
int sevenclassone;
int sevenclasstwo;
int sevenclassthree;
int sevenclassfour;

void technology_home();
void moral();
void koreanlanguage();
void math();
void pe();
void music();
void fineart();
void english();
void chines();
void computerscience();
void science();
void course();
void sports();
void scan();
void freeclass();
void completea();
void completeb();
void completec();
void completed();
void completee();
void losep();

void setup()
{
    // put your setup code here, to run once:
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("textbookscnnerteam");
    Serial.begin(9600);
    delay(1000);
}
void loop()
{
    // put your main code here, to run repeatedly:

    int monday = digitalRead(mondayb);
    int tuesday = digitalRead(tuesdayb);
    int wendsday = digitalRead(wendsdayb);
    int thursday = digitalRead(thursdayb);
    int friday = digitalRead(fridayb);
    int i1 = digitalRead(infraredone);
    int i2 = digitalRead(infraredtwo);
    int i3 = digitalRead(infraredthree);
    int i4 = digitalRead(infraredfour);

    if (monday == 1)
    {
        start = 1;
        whatbutton = 'a';
    }
    else if (tuesday == 1)
    {
        start = 1;
        whatbutton = 'b';
    }

    else if (wendsday == 1)
    {
        whatbutton = 'c';
        start = 1;
    }

    else if (thursday == 1)
    {
        whatbutton = 'd';
        start = 1;
    }
    else if (friday == 1)
    {
        whatbutton = 'e';
        start = 1;
    }

    if (start == 1)
    {
        switch (whatbutton)
        {

        case 'a':
            // 수학 체육 과학 도덕 국어 영어
            lcd.clear();
            math();
            oneclassone = i1;
            oneclasstwo = i2;
            oneclassthree = i3;
            oneclassfour = i4;

            delay(3000);
            lcd.clear();
            pe();
            delay(3000);
            twoclassone = i1;
            twoclasstwo = i2;
            twoclassthree = i3;
            twoclassfour = i4;
            lcd.clear();
            science();
            delay(3000);
            threeclassone = i1;
            threeclasstwo = i2;
            threeclassthree = i3;
            threeclassfour = i4;
            lcd.clear();
            moral();
            delay(3000);
            fourclassone = i1;
            fourclasstwo = i2;
            fourclassthree = i3;
            fourclassfour = i4;
            lcd.clear();
            koreanlanguage();
            delay(3000);
            fiveclassone = i1;
            fiveclasstwo = i2;
            fiveclassthree = i3;
            fiveclassfour = i4;
            lcd.clear();
            english();
            delay(3000);
            sixclassone = i1;
            sixclasstwo = i2;
            sixclassthree = i3;
            sixclassfour = i4;
            lcd.clear();
            completea(oneclassone, oneclasstwo, oneclassthree, oneclassfour, threeclassone, threeclasstwo, threeclassthree, threeclassfour, fourclassone, fourclasstwo, fourclassthree, fourclassfour, fiveclassone, fiveclasstwo, fiveclassthree, fiveclassfour, sixclassone, sixclasstwo, sixclassthree, sixclassfour);
            break;

        case 'b':

            lcd.clear();
            sports();
            delay(3000);
            oneclassone = i1;
            oneclasstwo = i2;
            oneclassthree = i3;
            oneclassfour = i4;
            lcd.clear();
            koreanlanguage();
            delay(3000);
            twoclassone = i1;
            twoclasstwo = i2;
            twoclassthree = i3;
            twoclassfour = i4;
            lcd.clear();
            technology_home();
            delay(3000);
            threeclassone = i1;
            threeclasstwo = i2;
            threeclassthree = i3;
            threeclassfour = i4;
            lcd.clear();
            math();
            delay(3000);
            fourclassone = i1;
            fourclasstwo = i2;
            fourclassthree = i3;
            fourclassfour = i4;
            lcd.clear();
            moral();
            delay(3000);
            fiveclassone = i1;
            fiveclasstwo = i2;
            fiveclassthree = i3;
            fiveclassfour = i4;
            lcd.clear();
            music();
            delay(3000);
            sixclassone = i1;
            sixclasstwo = i2;
            sixclassthree = i3;
            sixclassfour = i4;

            lcd.clear();
            english();
            delay(3000);
            sevenclassone = i1;
            sevenclasstwo = i2;
            sevenclassthree = i3;
            sevenclassfour = i4;
            lcd.clear();
            completeb();
            break;

        case 'c':

            lcd.clear();
            math();
            delay(3000);
            oneclassone = i1;
            oneclasstwo = i2;
            oneclassthree = i3;
            oneclassfour = i4;
            lcd.clear();
            technology_home();
            delay(3000);
            twoclassone = i1;
            twoclasstwo = i2;
            twoclassthree = i3;
            twoclassfour = i4;
            lcd.clear();
            koreanlanguage();
            delay(3000);
            threeclassone = i1;
            threeclasstwo = i2;
            threeclassthree = i3;
            threeclassfour = i4;
            lcd.clear();
            pe();
            delay(3000);
            fourclassone = i1;
            fourclasstwo = i2;
            fourclassthree = i3;
            fourclassfour = i4;
            lcd.clear();
            fineart();
            delay(3000);
            fiveclassone = i1;
            fiveclasstwo = i2;
            fiveclassthree = i3;
            fiveclassfour = i4;
            lcd.clear();
            chines();
            delay(3000);
            sixclassone = i1;
            sixclasstwo = i2;
            sixclassthree = i3;
            sixclassfour = i4;
            lcd.clear();
            completec();
            break;

        case 'd':

            lcd.clear();
            math();
            delay(3000);
            oneclassone = i1;
            oneclasstwo = i2;
            oneclassthree = i3;
            oneclassfour = i4;
            lcd.clear();
            koreanlanguage();
            delay(3000);
            twoclassone = i1;
            twoclasstwo = i2;
            twoclassthree = i3;
            twoclassfour = i4;
            lcd.clear();
            science();
            delay(3000);
            threeclassone = i1;
            threeclasstwo = i2;
            threeclassthree = i3;
            threeclassfour = i4;
            lcd.clear();
            technology_home();
            delay(3000);
            fourclassone = i1;
            fourclasstwo = i2;
            fourclassthree = i3;
            fourclassfour = i4;
            lcd.clear();
            music();
            delay(3000);
            fiveclassone = i1;
            fiveclasstwo = i2;
            fiveclassthree = i3;
            fiveclassfour = i4;
            lcd.clear();
            course();
            delay(3000);
            sixclassone = i1;
            sixclasstwo = i2;
            sixclassthree = i3;
            sixclassfour = i4;
            lcd.clear();
            course();
            delay(3000);
            sevenclassone = i1;
            sevenclasstwo = i2;
            sevenclassthree = i3;
            sevenclassfour = i4;
            lcd.clear();
            break;

        case 'e':

            lcd.clear();
            english();
            delay(3000);
            oneclassone = i1;
            oneclasstwo = i2;
            oneclassthree = i3;
            oneclassfour = i4;
            lcd.clear();
            computerscience();
            delay(3000);
            twoclassone = i1;
            twoclasstwo = i2;
            twoclassthree = i3;
            twoclassfour = i4;
            lcd.clear();
            computerscience();
            delay(3000);
            threeclassone = i1;
            threeclasstwo = i2;
            threeclassthree = i3;
            threeclassfour = i4;
            lcd.clear();
            freeclass();
            delay(3000);
            fourclassone = i1;
            fourclasstwo = i2;
            fourclassthree = i3;
            fourclassfour = i4;
            lcd.clear();
            chines();
            delay(3000);
            fiveclassone = i1;
            fiveclasstwo = i2;
            fiveclassthree = i3;
            fiveclassfour = i4;

            lcd.clear();
            pe();
            delay(3000);
            sixclassone = i1;
            sixclasstwo = i2;
            sixclassthree = i3;
            sixclassfour = i4;
            lcd.clear();
            break;

        default:
            break;
        }
    }
}

void technology_home()
{
    lcd.print("technology_home");
}
void moral()
{
    lcd.print("moral");
}
void koreanlanguage()
{
    lcd.print("koreanlanguage");
}
void math()
{
    lcd.print("math");
}
void pe()
{
    lcd.print("pe");
}
void music()
{
    lcd.print("music");
}
void fineart()
{
    lcd.print("fineart");
}
void english()
{
    lcd.print("engish");
}
void chines()
{
    lcd.print("chines");
}
void computerscience()
{
    lcd.print("computerscience");
}
void science()
{
    lcd.print("science");
}

void sports()
{
    lcd.print("sports");
}

void course()
{
    lcd.print("course");
}

void freeclass()
{
    lcd.print("freeclass");
}
void scan()
{
    lcd.print("scanning");
}
void losep()
{
    lcd.print("lose");
}
void completea(int oneclassone, int oneclasstwo, int oneclassthree, int oneclassfour, int threeclassone, int threeclasstwo, int threeclassthree, int threeclassfour, int fourclassone, int fourclasstwo, int fourclassthree, int fourclassfour, int fiveclassone, int fiveclasstwo, int fiveclassthree, int fiveclassfour, int sixclassone, int sixclasstwo, int sixclassthree, int sixclassfour)
{

    if (oneclassone == 0 and oneclasstwo == 0 and oneclassthree == 0 and oneclassfour == 0)
    {
        lcd.print("mathok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomath");
        delay(3000);
        lcd.clear();
    }

    if (threeclassone == 1 and threeclasstwo == 0 and threeclassthree == 0 and threeclassfour == 0)
    {
        lcd.print("scienceok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("noscience");
        delay(3000);
        lcd.clear();
    }

    if (fourclassone == 0 and fourclasstwo == 1 and fourclassthree == 1 and fourclassfour == 0)
    {
        lcd.print("moralok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomoral");
        delay(3000);
        lcd.clear();
    }

    if (fiveclassone == 1 and fiveclasstwo == 1 and fiveclassthree == 1 and fiveclassfour == 1)
    {
        lcd.print("kereanlanguageok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nokr");
        delay(3000);
        lcd.clear();
    }

    if (sixclassone == 0 and sixclasstwo == 0 and sixclassthree == 0 and sixclassfour == 1)
    {
        lcd.print("englishok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("noenglish");
        delay(3000);
        lcd.clear();
    }

    return;
}

void completeb()
{
    if (twoclassone == 0 and twoclasstwo == 0 and twoclassthree == 0 and twoclassfour == 0)
    {
        lcd.print("krok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nokr");
        delay(3000);
        lcd.clear();
    }

    if (threeclassone == 0 and threeclasstwo == 0 and threeclassthree == 0 and threeclassfour == 0)
    {
        lcd.print("hometechnologyok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nohometechnologyok");
        delay(3000);
        lcd.clear();
    }

    if (fourclassone == 0 and fourclasstwo == 0 and fourclassthree == 0 and fourclassfour == 0)
    {
        lcd.print("mathok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomath");
        delay(3000);
        lcd.clear();
    }

    if (fiveclassone == 0 and fiveclasstwo == 0 and fiveclassthree == 0 and fiveclassfour == 0)
    {
        lcd.print("moralok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomoral");
        delay(3000);
        lcd.clear();
    }

    if (sixclassone == 0 and sixclasstwo == 0 and sixclassthree == 0 and sixclassfour == 0)
    {
        lcd.print("musicok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomusic");
        delay(3000);
        lcd.clear();
    }

    if (sevenclassone == 0 and sevenclasstwo == 0 and sevenclassthree == 0 and sevenclassfour == 0)
    {
        lcd.print("englishok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("noenglish");
        delay(3000);
        lcd.clear();
    }
}
void completec()
{
    if (oneclassone == 0 and oneclasstwo == 0 and oneclassthree == 0 and oneclassfour == 0)
    {
        lcd.print("mathok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomath");
        delay(3000);
        lcd.clear();
    }

    if (twoclassone == 0 and twoclasstwo == 0 and twoclassthree == 0 and twoclassfour == 0)
    {
        lcd.print("technologyhomeok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("notechnologyhome");
        delay(3000);
        lcd.clear();
    }

    if (threeclassone == 0 and threeclasstwo == 0 and threeclassthree == 0 and threeclassfour == 0)
    {
        lcd.print("krok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nokr");
        delay(3000);
        lcd.clear();
    }

    if (fiveclassone == 0 and fiveclasstwo == 0 and fiveclassthree == 0 and fiveclassfour == 0)
    {
        lcd.print("fineartok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nofineart");
        delay(3000);
        lcd.clear();
    }

    if (sixclassone == 0 and sixclasstwo == 0 and sixclassthree == 0 and sixclassfour == 0)
    {
        lcd.print("chinesok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nochines");
        delay(3000);
        lcd.clear();
    }
}
void completed()
{
    if (oneclassone == 0 and oneclasstwo == 0 and oneclassthree == 0 and oneclassfour == 0)
    {
        lcd.print("mathok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomath");
        delay(3000);
        lcd.clear();
    }

    if (twoclassone == 0 and twoclasstwo == 0 and twoclassthree == 0 and twoclassfour == 0)
    {
        lcd.print("krok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nokr");
        delay(3000);
        lcd.clear();
    }

    if (threeclassone == 0 and threeclasstwo == 0 and threeclassthree == 0 and threeclassfour == 0)
    {
        lcd.print("scienceok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("noscience");
        delay(3000);
        lcd.clear();
    }

    if (fourclassone == 0 and fourclasstwo == 0 and fourclassthree == 0 and fourclassfour == 0)
    {
        lcd.print("technologyhomeok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("notechnologyhome");
        delay(3000);
        lcd.clear();
    }

    if (fiveclassone == 0 and fiveclasstwo == 0 and fiveclassthree == 0 and fiveclassfour == 0)
    {
        lcd.print("musicok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("nomusic");
        delay(3000);
        lcd.clear();
    }

    if (sixclassone == 0 and sixclasstwo == 0 and sixclassthree == 0 and sixclassfour == 0)
    {
        lcd.print("technologyhomeok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("notechnologyhome");
        delay(3000);
        lcd.clear();
    }

    if (twoclassone == 0 and twoclasstwo == 0 and twoclassthree == 0 and twoclassfour == 0)
    {
        lcd.print("technologyhomeok");
        delay(3000);
        lcd.clear();
    }
    else
    {
        lcd.print("notechnologyhome");
        delay(3000);
        lcd.clear();
    }
}
void completee()
{
}
