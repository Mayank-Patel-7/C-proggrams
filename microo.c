#include <stdio.h>
#include <string.h>

struct user
{
    char name[20];
    int mobile;
} u;

int laptop()
{
    int Ac, Dc, Hc, Lc;
    int choice;
    printf("\nShowing Top Laptops brands\n");
    printf("press the given code value to procced\n[1]-For ASUS\n[2]-For HP\n[3]-For DELL\n[4]-For LENOVO\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n\tWe Have 5 Models from the brand ASUS\n");
        printf("\n[1]Asus TUF Gaming latop \n[2]Asus Vivobook 16 \n[3]Asus Vivobook 15 \n[4]Asus ROG Striks(2023)\n[5]Asus Aspire lite\n");
        scanf("%d", &Ac);
        asus(Ac);
        return 1;
        break;
    case 2:
        printf("We Have 4 Models from the brand HP\n");
        printf("[1]HP 15s (For working Professionals)\n[2]HP Pavilion 14\n[3]HP OMEN Gaming Laptop\n[4]HP Victus Gaming Laptop\n");
        scanf("%d", &Hc);
        hp(Hc);
        return 2;
        break;
    case 3:
        printf("We Have 3 Models from the brand DELL\n");
        printf("[1]Dell 15 Laptop\n[2]Dell Inspiron 5430 Laptop\n[3]Dell G15-5530 Gaming Laptop\n");
        scanf("%d", &Dc);
        dell(Dc);
        return 3;
        break;
    case 4:
        printf("We Have 5 Models from the brand LENOVO /n");
        printf("Lenovo IdeaPad Slim 3\nLenovo Yoga Slim 6\nLenovo IdeaPad Gaming 3\nLenovo Legion 5 Pro\nLenovo LOQ 2024\n");
        scanf("%d", &Lc);
        return 4;
        lenovo(Lc);
        break;
    }
}

int asus(int Ac)
{

    if (Ac == 1)
    {
        printf("ASUS TUF Gaming F15 (2023)\n90WHr Battery, Intel Core i7-12700H 12th Gen, 15.6 FHD 144Hz, 8GB RTX 4060 \n");
        printf("Gaming Laptop (16GB/512GB SSD/Windows 11//1-Zone RGB/Gray/2.20 Kg) \nPrice(Including all inclusive taxes)- Rs 99,990/-only\n");
        return 0;
    }
    else if (Ac == 2)
    {
        printf("ASUS Vivobook 16 (2023), Intel Core i9-13900H 13th Gen, 16 (40.64 cm) FHD+ ");
        printf("Thin & Light Laptop (16GB/512GB SSD/Intel Iris Xe/Win 11/Office 2021/Backlit KB/Fingerprint/Silver/1.88 kg)\nPrice(Including all inclusive taxes)- 54,000 /-only");
    }
    else if (Ac == 3)
    {
        printf("ASUS Vivobook 15, Intel Core i3-1220P 12th Gen\n15.6 (39.62 cm) FHD, Thin and Laptop (8GB/512GB SSD/Integrated Graphics\n");
        printf("Windows 11/Office 2021/Alexa Built-in/FP Sensor/Blue/1.7 kg\nPrice(Including all inclusive taxes)- Rs 39,400 /-only");
        return 0;
    }
    else if (Ac == 4)
    {
        printf("ASUS ROG Strix G15, AMD Ryzen 7 6800H\n(Included - ROG Impact Mouse & Mat), 15.6(39.62 cm) FHD 144Hz, 4GB RTX 3050 GPU, Gaming Laptop\n");
        printf("(16GB/1TB SSD/Win11/Office 21/Electro Punk/2.1 Kg)\n Price(Including all inclusive taxes)- 89,540/-only");
        return 0;
    }
    else
    {
        printf("Acer Aspire Lite AMD Ryzen 5 5500U \nPremium Thin and Light Laptop (16 GB RAM/512 GB SSD\n");
        printf("Windows 11 Home) AL15-41, 39.62 cm (15.6) Full HD Display, Metal Body, Steel Gray, 1.59 KG\nPrice(Including all inclusive taxes) - Rs 37,490 /-only");
        return 0;
    }
    return 0;
}
int hp(int Hc)
{
    if (Hc == 1)
    {
        printf("\nHP 15s, Ryzen 5-5500U, 16GB RAM/512GB SSD 15.6-inches(39.6 cm) FHD, Micro-Edge, Anti-Glare Laptop/Alexa Built-in\n");
        printf("Windows 11 /AMD Radeon Graphics/Dual Speakers/MS Office 2021/1.69 Kg\nPrice(Including all inclusive taxes)- Rs43,310 /-Only\n");
    }
    else if (Hc == 2)
    {
        printf("\nHP Pavilion 14 12th Gen Intel Core i7 16GB SDRAM/1TB SSD 14 inch(35.6cm) FHD,IPS,Micro-Edge Display/Intel Iris Xe\n");
        printf("Graphics/B&O/Win 11/Alexa Built-in/Backlit KB/FPR/MSO 2021/Natural Silver\nPrice(Including all inclusive taxes)- Rs 76,990/-Only\n");
    }
    else if (Hc == 4)
    {
        printf("\nHP Victus Gaming Laptop, AMD Ryzen 7 7840HS AI powered, 6GB RTX 3050 GPU, 16.1-inch (40.9 cm), 95W TGP, FHD, IPS, 144Hz");
        printf("16GB DDR5, 1TB SSD, 300 nits, RGB Backlit KB, B&O (MSO, Blue, 2.29 kg)\nPrice(Including all inclusive taxes)- Rs 82,490/-Only\n");
    }
    else
    {
        printf("\nHP OMEN Gaming Laptop, AMD Ryzen 7 6800H, 8GB RTX 3070Ti GPU, 16.1-inch (40.9 cm), QHD, IPS, 165Hz, 16GB DDR5\n");
        printf("1TB SSD, 300 nits, RGB Backlit KB, B&O, Dual Speakers (MSO, Silver, 2.37 kg)\nPrice(Including all inclusive taxes)- Rs 1,05,990/-Only\n");
    }
    return 0;
}
int dell(int Dc)
{
    if (Dc == 1)
    {
        printf("\nDell 15 Laptop, Intel 12th Gen Core i3-1215U Proc/8GB DDR4/512GB SSD/Intel UHD Graphic/15.6(38cm) FHD Display\n");
        printf("Spill-Resistant Keyboard/Win11+MSO'21/15 Month McAfee/Black/Thin & Light 1.69kg\nPrice(Including all inclusive taxes)- Rs 35,990/-Only\n");
    }
    else if (Dc == 2)
    {
        printf("\nDell Inspiron 5430 Laptop, 13th Gen Intel Core i7-1360P Processor/16GB/1TB SSD/14.0 (35.56cm) FHD+ WVA 250\n");
        printf("nits/Backlit KB + FPR/Win 11 + MSO'21/15 Month McAfee/Platinum Silver/Thin & Light- 1.59kg\nPrice(Including all inclusive taxes)- Rs 86,730/-Only\n");
    }
    else
    {
        printf("\nDell G15-5530 Gaming Laptop, Intel Core i7-13650HX Processor/16GB/512GB SSD/NVIDIA RTX 4050 6GB GDDR6/15.6(39.62cm) FHD 165Hz\n");
        printf("sRGB-100*/Win 11+MSO'21/Backlit KB 4-Zone RGB/Dark Shadow Gray/2.65Kgs\nPrice(Including all inclusive taxes)- Rs 1,07,900/-Only\n");
    }
    return 0;
}
int lenovo(int Lc)
{
    if (Lc == 1)
    {
        printf("\nLenovo IdeaPad Slim 3 Intel Core i5-12450H 15 (39.6cm) FHD IPS 300 Nits Thin & Light Laptop");
        printf("(16GB/512GB SSD/Win 11/Office 2021/Alexa Built-in/3 Month Game Pass/Arctic Grey/1.62Kg)\nPrice(Including all inclusive taxes)- Rs 54,540/-Only\n");
    }
    else if (Lc == 2)
    {
        printf("\nLenovo Yoga Slim 6 Intel Evo Core i5 1240P 14(35.5cm) 2.2K 300Nit Laptop");
        printf("(16GB/512GB SSD/60Hz Refresh/Win 11/Office 2021/Backlit KB/1Yr Warranty/Alexa/3 Month Game Pass/Storm Grey/1.35Kg\nPrice(Including all inclusive taxes)- Rs 64,990/-Only\n");
    }
    else if (Lc == 3)
    {
        printf("\nLenovo IdeaPad Gaming 3 Intel Core i5-11320H 15.6 (39.62cm) FHD IPS 60Hz Gaming Laptop (8GB/512GB SSD)\n");
        printf("Windows 11/NVIDIA RTX 2050 4GB/Alexa/3 Month Game Pass/Shadow Black/2.25Kg)\nPrice(Including all inclusive taxes)- Rs 48,990/-Only\n");
    }
    else if (Lc == 4)
    {
        printf("Lenovo Legion 5 Pro AMD Ryzen 7 5800H40cm 500Nits QHD Gaming Laptop(16GB/1TB SSD/RTX 3060 6GB GDDR6\n");
        printf("Graphics/165Hz/Windows 11/Office 2021/RGB Backlit/3mnth Xbox Game Pass/Storm Grey\nPrice(Including all inclusive taxes)- Rs 91,190/-Only\n");
    }
    else
    {
        printf("Lnenovo LOQ 2024 Intel Core i5-12450HX 15.6 (39.6cm) 144Hz 300Nits FHD Gaming Laptop (8GB/512GB SSD");
        printf("Win 11/Intel Arc A530M 4GB Graphics/100% sRGB/3 Month Game Pass/Luna Grey/2.4Kg)\nPrice(Including all inclusive taxes)- Rs 59,990/-Only\n");
    }
    return 0;
}


void phone()
{
    int Aac, Sc, Vc, Xc;
    int choice;
    printf("Showing Top Smartphones brands\n");
    printf("press the given code value to procced\n[1]-For APPLE\n[2]-For SAMSUNG\n[3]-For Vivo\n[4]-For Xiomi\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("We Have 5 Models from the brand Apple\n");
        printf(" [1]For iPhone 15 pro Max (Stroge 1Tb )\nPrice(Including all inclusive taxes)- 199,900 /-only \n[2]For iPhone 14 plus (Storage 512 gb)\nPrice(Including all inclusive taxes)- 109,900 /-only  \n[3]For iPhone 12 pro (Storage 256 gb)\nPrice(Including all inclusive taxes)- 99,900 /-only \n[4]For iPhone 11 pro (Storage 128 gb)\nPrice(Including all inclusive taxes)- 98,900 /-only\n");
        scanf("%d", &Aac);
         
        break;
    case 2:
        printf("We Have 5 Models from the brand Samsung\n");
        printf("[1]For Samsang Galaxy S24 Ultra (Ram 12gb | Stroge 1tb )\nPrice(Including all inclusive taxes)- 158,900 /-only  \n[2] For Samsung Galaxy S23 Ultra (Ram 12gb | Stroge 521gb )\nPrice(Including all inclusive taxes)- 119,900 /-only  \n[3]For Samsung Galaxy S21 Fe 5g (Ram 8gb | Stroge 256gb )\nPrice(Including all inclusive taxes)- 33,900 /-only \n[4]For Samsung M34 (Ram 8gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 17,900 /-only  \n");
        scanf("%d", &Sc);
        break;
    case 3:
        printf("We Have 5 Models from the brand Vivo\n");
        printf("[1]For Vivo X100 Pro (Ram 16gb | Stroge 512gb )\nPrice(Including all inclusive taxes)- 89,900 /-only  \n[2]For Vivo V30 Pro (Ram 8gb | Stroge 256gb )\nPrice(Including all inclusive taxes)- 41,900 /-only \n[3]For Vivo Y200e 5g (Ram 8gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 19,900 /-only  \n[4]For Vivo T2 5g (Ram 8gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 16,900 /-only \n");
        scanf("%d", &Vc);
        break;
    case 4:
        printf("We Have 5 Models from the brand Xiomi /n");
        printf("[1]For Redmi Note 13 Pro (Ram 12gb | Stroge 512gb )\nPrice(Including all inclusive taxes)- 35,000 /-only  \n[2]For Xiaomi 13 Pro (Ram 12gb | Stroge 256gb )\nPrice(Including all inclusive taxes)- 75,000 /-only  \n[3]For Xiaomi Redmi Note 11 (Ram 6gb | Stroge 128gb )\nPrice(Including all inclusive taxes)- 11,900 /-only \n[4]For Xiaomi 14 (Ram 12gb | Stroge 512gb )\nPrice(Including all inclusive taxes)- 69,000 /-only \n");
        scanf("%d", &Xc);

        break;
    }
}
int boat(int Bc)
{
    if (Bc == 1)
    {
        printf("boAt Rockerz 460 with upto 30 Hours Playback, Beast Mode & ENx Technology Bluetooth Headset  (Active Black, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs1,799/- Only");
        return 0;
    }
    else
    {
        printf("boAt Immortal IM1300 Bluetooth Gaming Headset  (Black Sabre, On the Ear)");
        printf("Price(includiing all inclusive taxes)- Rs3,799/- Only");
        return 0;
    }
}
int jlabe(int Jc){
}

int sony(int Sc)
{
    
    if (Sc == 1)
    {
        printf("SONY PS5 Pulse 3D Bluetooth Gaming Headset  (Gray Camouflage, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs7,499/- Only");
        return 0;
    }
    else if(Sc==2)
    {
        printf("SONY WH-XB910N with 30Hrs Battery Life, Active Noise Cancellation enabled Bluetooth Headset  (Black, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs9,999/- Only");
        return 0;
    }
    else
    {
        printf("SONY WH1000XM4/SM Bluetooth Headset  (Silver, On the Ear)\n");
        printf("Price(includiing all inclusive taxes)- Rs19,199/- Only");
        return 0 ; 
    }
    
}
void Headphone()
{
    int Sc, Bc, Jc, Mc;
    int choice;
    printf("Showing Top Headphones brands\n");
    printf("press the given code value to procced\n[1]-For Boat\n[2]-For JBL\n[3]-For Sony\n[4]-For MSI\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\tWe Have 2 Models from the brand  Boat\n");
        printf("[1]boAt Rockerz 460\n[2]boAt Immortal IM1300\n");
        scanf("%d", &Bc);
        boat(Bc);
         break;
    case 2:
        printf("We Have 3 Models from the brand JBL\n");
        printf("[1]JBL Tune 770NC\n[2]JBL Tune 520 BT\n[3]JBL Tune 230NC");
        scanf("%d", &Jc);
        jlabe(Jc);
        break;
        
    case 3:
        printf("We Have 3 Models from the brand Sony\n");
        printf("SONY PS5 Pulse 3D\nSONY WH-XB910N\nSONY WH1000XM4/SM\n");
        scanf("%d", &Sc);
        sony(Sc);
        break;
    case 4:
        printf("We Have 1 Model from the brand MSI/n");
        printf("MSI Adjustable Microphon(Gaming)\nPrice(including all inclusive taxes)- Rs 3,100/-\n");
        scanf("%d", &Mc);
        break;
    }
}
void television()
{

    int Ac, Dc, Hc, Lc;
    int choice;
    printf("Showing Top Laptops brands\n");
    printf("press the given code value to procced\n[1]-For ASUZ\n[2]-For HP\n[3]-For DELL\n[4]-For LENOVO\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("We Have 5 Models from the brand ASUZ\n");
        printf("Model 1 \nModel 2\nModel 3\nModel 4\nModel 5\n");
        scanf("%d", &Ac);
        break;
    case 2:
        printf("We Have 5 Models from the brand HP\n");
        printf("Model 1 \nModel 2\nModel 3\nModel 4\nModel 5\n");
        scanf("%d", &Hc);
        break;
    case 3:
        printf("We Have 5 Models from the brand DELL\n");
        printf("Model 1 \nModel 2\nModel 3\nModel 4\nModel 5\n");
        scanf("%d", &Dc);
        break;
    case 4:
        printf("We Have 5 Models from the brand LENOVO /n");
        printf("Model 1 \nModel 2\nModel 3\nModel 4\nModel 5\n");
        scanf("%d", &Lc);
        break;
    }
}

void main()
{
    int result;
    char buy[15];
    int exit = 0;
    void bill(int a);
    int a;

    printf("\t*** Weclome To GPN Digitals *** \n");

    do
    {
        printf("\nWhat would you like to purchase\nSmartphone, Laptop, Headphone, Televisions :");
        scanf("%s", &buy);
        if (strcmpi(buy, "Laptop") == 0)
        {
            laptop();
        }
        else if (strcmpi(buy, "Smartphone") == 0)
        {
            phone();
        }
        else if (strcmpi(buy, "Headphone") == 0)
        {
            Headphone();
        }
        else if (strcmpi(buy, "Television") == 0)
        {
            television();
        }
        else
        {
            printf("Sorry Were are enable to provide you with '%s'....\n", buy);
        }
        printf("\nDo you want to purchase any thing else .\nTo continue Shopping Enter [0] , If you want to exit Enter [1]\n");
        scanf("%d", &exit);

    } while (exit == 0);

    struct user u;
    printf("For next Step Enter \n Your Name : ");
    gets(u.name);
    printf("\n Enter your Mobile NO. : ");
    scanf("%d", &u.mobile);

    bill(a);

    printf("\nThanks for Visiting Hope you Viste again.");
}

void bill(int a)
{
    int i, stored_choice, value, stored_choice_price, bill = 0;
    for (i = 0; i <= 100; i++)
    {
        if (i == stored_choice)
            value = stored_choice_price;
        bill = value + bill;
    }
    printf(" Your Total Bill =  %d  ", bill);
}
