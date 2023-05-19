#include <iostream>
using namespace std;

int main()
{
    int rooms_av = 0, fried_av = 0, burger_av = 0, pizza_av = 0, biriyani_av = 0, chicken_av = 0, mutton_av = 0;

    int rooms_p = 1000, fried_p = 150, burger_p = 90, pizza_p = 100, biriyani_p = 170, chicken_p = 180, mutton_p = 250;

    int rooms_s = 0, fried_s = 0, burger_s = 0, pizza_s = 0, biriyani_s = 0, chicken_s = 0, mutton_s = 0;

    int rooms_rev = 0, fried_rev = 0, burger_rev = 0, pizza_rev = 0, biriyani_rev = 0, chicken_rev = 0, mutton_rev = 0;

    int choice, quantity;

    cout << "|---------Quantity of items we have---------|";
    cout << "\n Rooms avaliable : ";
    cin >> rooms_av;
    cout << "\n Quantity of Fried Rice available : ";
    cin >> fried_av;
    cout << "\n Quantity of Burger available: ";
    cin >> burger_av;
    cout << "\n Quantity of Pizza available: ";
    cin >> pizza_av;
    cout << "\n Quantity of Biriyani available: ";
    cin >> biriyani_av;
    cout << "\n Quantity of Chicken Kasha available: ";
    cin >> chicken_av;
    cout << "\n Quantity of Mutton Kasha available: ";
    cin >> mutton_av;
m:
    cout << "\n\n|--------------Please select from the given menu options---------------|";
    cout << "\n 1) Rooms";
    cout << "\n 2) Fried Rice";
    cout << "\n 3) Burger";
    cout << "\n 4) Pizza";
    cout << "\n 5) Biriyani";
    cout << "\n 6) Chicken Kasha";
    cout << "\n 7) Mutton Kasha";
    cout << "\n 8) Information regarding sales and collection";
    cout << "\n 9) Exit";
    cout << "\n\n Please enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter Number of rooms you want : ";
        cin >> quantity;
        if (rooms_av - rooms_s >= quantity)
        {
            rooms_s += quantity;
            rooms_av -= quantity;
            rooms_rev += (quantity * rooms_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "room/rooms have been alloted to you----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << rooms_av << " "
                 << "room/rooms are available----|";
        break;
    case 2:
        cout << "\n\n Enter Number of Plates of Fried_ Rice you want : ";
        cin >> quantity;
        if (fried_av - fried_s >= quantity)
        {
            fried_s += quantity;
            fried_av -= quantity;
            fried_rev += (quantity * fried_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "plate/plates of Fried Rice have been ordered----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << fried_av << " "
                 << "plate/plates of Fried Rice are available----|";
        break;
    case 3:
        cout << "\n\n Enter Number of Burgers you want : ";
        cin >> quantity;
        if (burger_av - burger_s >= quantity)
        {
            burger_s += quantity;
            burger_av -= quantity;
            burger_rev += (quantity * burger_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "burger/burgers have been ordered----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << burger_av << " "
                 << "burger/burgers are available----|";
        break;
    case 4:
        cout << "\n\n Enter Number of pizza you want : ";
        cin >> quantity;
        if (pizza_av - pizza_s >= quantity)
        {
            pizza_s += quantity;
            pizza_av -= quantity;
            pizza_rev += (quantity * pizza_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "pizza/pizzas have been ordered----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << pizza_av << " "
                 << "pizza/pizzas are available----|";
        break;
    case 5:
        cout << "\n\n Enter Number of plates of biriyani you want : ";
        cin >> quantity;
        if (biriyani_av - biriyani_s >= quantity)
        {
            biriyani_s += quantity;
            biriyani_av -= quantity;
            biriyani_rev += (quantity * biriyani_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "plate/plates of Biriyani have been ordered----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << biriyani_av << " "
                 << "plate/plates of Biriyani are available----|";
        break;
    case 6:
        cout << "\n\n Enter Number of plates of Chicken kasha you want : ";
        cin >> quantity;
        if (chicken_av - chicken_s >= quantity)
        {
            chicken_s += quantity;
            chicken_av -= quantity;
            chicken_rev += (quantity * chicken_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "plate/plates of Chicken Kasha have been ordered----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << chicken_av << " "
                 << "plate/plates of Chicken Kasha are available----|";
        break;
    case 7:
        cout << "\n\n Enter Number of plates of Mutton kasha you want : ";
        cin >> quantity;
        if (mutton_av - mutton_s >= quantity)
        {
            mutton_s += quantity;
            mutton_av -= quantity;
            mutton_rev += (quantity * mutton_p);
            cout << "\n|----Congrats!"
                 << " " << quantity << " "
                 << "plate/plates of Mutton Kasha have been ordered----|";
        }
        else
            cout << "\n|----Sorry! only"
                 << " " << mutton_av << " "
                 << "plate/plates of Mutton Kasha are available----|";
        break;
    case 8:
        cout << "\n|-------Details of sales and collection--------| ";

        cout << "\n\n Number of Rooms we had : " << rooms_av + rooms_s;
        cout << "\n Number of Rooms we gave for rent : " << rooms_s;
        cout << "\n Remaining Rooms : " << rooms_av;
        cout << "\n\n Total Rooms collection for the Day : " << rooms_rev;

        cout << "\n\n Number of plates of Fried Rice  we had : " << fried_av + fried_s;
        cout << "\n Number of plates we sold : " << fried_s;
        cout << "\n Remaining plates: " << fried_av;
        cout << "\n\n Total Fried Rice collection for the Day : " << fried_rev;

        cout << "\n\n Number of Burgers we had : " << burger_av + burger_s;
        cout << "\n Number of burgers we sold : " << burger_s;
        cout << "\n Remaining burgers: " << burger_av;
        cout << "\n\n Total Burger collection for the Day : " << burger_rev;

        cout << "\n\n Number of Pizzas  we had : " << pizza_av + pizza_s;
        cout << "\n Number of burgers we sold : " << pizza_s;
        cout << "\n Remaining pizzas: " << pizza_av;
        cout << "\n\n Total Pizza collection for the Day : " << pizza_rev;

        cout << "\n\n Number of plates of Biriyani we had : " << biriyani_av + biriyani_s;
        cout << "\n Number of plates we sold : " << biriyani_s;
        cout << "\n Remaining plates: " << biriyani_av;
        cout << "\n\n Total Biriyani collection for the Day : " << biriyani_rev;

        cout << "\n\n Number of plates of Chicken Kasha  we had : " << chicken_av + chicken_s;
        cout << "\n Number of plates we sold : " << chicken_s;
        cout << "\n Remaining plates: " << chicken_av;
        cout << "\n\n Total Chicken Kasha collection for the Day : " << chicken_rev;

        cout << "\n\n Number of plates of Mutton Kasha we had : " << mutton_av + mutton_s;
        cout << "\n Number of plates we sold : " << mutton_s;
        cout << "\n Remaining plates: " << mutton_av;
        cout << "\n\n Total Mutton Kasha collection for the Day : " << mutton_rev;

        cout << "\n\n\n Total Collection for the day : " << rooms_rev + fried_rev + burger_rev + pizza_rev + biriyani_rev + chicken_rev + mutton_rev;
        break;
    case 9:
        exit(0);
    default:
        cout << "\n Please select from the numbers mentioned above!";
    }

    goto m;
}
