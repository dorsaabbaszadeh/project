#include <stdio.h>
#include <stdlib.h>11
#include <string.h>
#include <stdbool.h>
#include <time.h>

int leapflag(int year)
{
    int flag = 0, R;
    R = year % 33;
    if(year >= 1244 && year <= 1342){
        if(R == 1 || R == 5 || R == 9 || R == 13 || R == 17 || R == 21 || R == 26 || R == 30){
            flag = 1;
        }
    }
    else{
        if(R == 1 || R == 5 || R == 9 || R == 13 || R == 17 || R == 22 || R == 26 || R == 30){
            flag = 1;
        }
    }
    return (flag);
}

int Qleapflag(int year)
{
    int flag = 0, R;
    R = year % 30;

    if(R == 2 || R == 5 || R == 7 || R == 10 || R == 13 || R == 16 || R == 18 || R == 21 || R == 24 || R == 26 || R == 29){
            flag = 1;
        }

    return (flag);
}

void delay(int seconds)
{
    int m_seconds = 1000 * seconds;
    clock_t start_time = clock();
    while (clock() < start_time + m_seconds);
}

void month_calendar()
{

    char user_input[10];
    int year, month;
    int temp_month, temp_year, temp_day;
    int weekday, dayNum;

    while (true)
    {
        system("cls");
        printf("Month Calendar Program \n");
        printf("\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
        printf("\n");
        printf("Enter the year: ");
        scanf("%[^\n]%*c", user_input);

        if(strcmp(user_input, "0") == 0){
            printf("\n");
            printf("Back to menu! \n");
            printf("\n");
            delay(2);
            break;
        }
        year = atoi(user_input);

        printf("Enter the month: ");
        scanf("%[^\n]%*c", user_input);
        if(strcmp(user_input, "0") == 0){
            printf("\n");
            printf("Back to menu! \n");
            printf("\n");
            delay(2);
            break;
        }
        month = atoi(user_input);

        if (year < 1206 || year > 1498 || month < 1 || month > 12){
            printf("\n");
            printf("Invalid input! \n");
            printf("\n");
             if(year < 1206 || year > 1498)
            {
               system ("cls");
                printf("ENTER YEAR:");
                scanf("%d",&year);
            }
            else
            {


            if(month < 1 && month > 12)
            {
                system ("cls");
               printf("ENTER MONTH:");
                scanf("%d",&month);

            }
            else
            {
                system ("cls");
                printf("ENTER DAY:");
                scanf("%d",&month);

            }
            }

        }
        else{
            char monthName[12][15] = {"Farvardin", "Ordibehehesht", "Khordad", "Tir", "Mordad", "Shahrivar", "Mehr", "Aban", "Azar", "Dey", "Bahman", "Esfand"};
            int monthday[12] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30};
            int flag = leapflag(year);
            if(flag == 0){
               monthday[11] = 30;
            }

            int leap_cnt = 0;
            for(int i = 1206; i < year; i++){
                if(leapflag(i) == 1){
                    leap_cnt ++;
                }
            }
            dayNum = (year - 1206)*365 + leap_cnt;

            if(month < 7){
                dayNum += (month-1)*31;
            }
            else{
                dayNum += 6*31 + (month-7)*30;
            }

            temp_day = (dayNum%7 + 5)%7;
            int dayinmonth = monthday[month-1];

            printf("\n\n--------------------------%s--------------------------\n\n", monthName[month - 1]);
            printf("Sa     Su     Mo     Tu     We     Th     Fr\n\n");
            for (weekday = 0; weekday < temp_day; weekday++)
            {
                printf("       ");
            }
            for (int day = 1; day <= dayinmonth; day++)
            {
                printf("%02d     ", day);
                weekday ++;
                if (weekday > 6)
                {
                    printf("\n\n");
                    weekday = 0;
                }
            }
            printf("\n");
            printf("\n");
            printf("Press a key to continue: ");
            scanf("%[^\n]%*c", user_input);
            if(strcmp(user_input, "0") == 0){
                printf("\n");
                printf("Back to menu! \n");
                printf("\n");
                delay(2);
                break;
                    }
            }


            }
}
void nextcalnder()
{
char user_input[10];
    int year, month;
    int temp_month, temp_year, temp_day;
    int weekday, dayNum;

    while (true)
    {
        system("cls");
        printf("Month Calendar Program \n");
        printf("\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
        printf("\n");
        printf("Enter the year: ");
        scanf("%[^\n]%*c", user_input);

        if(strcmp(user_input, "0") == 0){
            printf("\n");
            printf("Back to menu! \n");
            printf("\n");
            delay(2);
            break;
        }
        year = atoi(user_input);

        printf("Enter the month: ");
        scanf("%[^\n]%*c", user_input);
        if(strcmp(user_input, "0") == 0){
            printf("\n");
            printf("Back to menu! \n");
            printf("\n");
            delay(2);
            break;
        }
        month = atoi(user_input);

        if (year < 1206 || year > 1498 || month < 1 || month > 12){
            printf("\n");
            printf("Invalid input! \n");
            printf("\n");
             if(year < 1206 || year > 1498)
            {
               system ("cls");
                printf("ENTER YEAR:");
                scanf("%d",&year);
            }
            else
            {


            if(month < 1 && month > 12)
            {
                system ("cls");
               printf("ENTER MONTH:");
                scanf("%d",&month);

            }
            else
            {
                system ("cls");
                printf("ENTER DAY:");
                scanf("%d",&month);

            }
            }

        }
        else{
            int n;
            scanf("%d",&n);
            char monthName[12][15] = {"Farvardin", "Ordibehehesht", "Khordad", "Tir", "Mordad", "Shahrivar", "Mehr", "Aban", "Azar", "Dey", "Bahman", "Esfand"};
            int monthday[12] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30};
            int flag = leapflag(year);
            if(flag == 0){
               monthday[11] = 30;
            }

            int leap_cnt = 0;
            for(int i = 1206; i < year; i++){
                if(leapflag(i) == 1){
                    leap_cnt ++;
                }
            }
            dayNum = (year - 1206)*365 + leap_cnt;

            if(month < 7){
                dayNum += (month-1)*31;
            }
            else{
                dayNum += 6*31 + (month-7)*30;
            }

            temp_day = (dayNum%7 + 5)%7;
            int dayinmonth = monthday[month-1];
            for(int i = month ; i <= n ; i ++)
{


            printf("\n\n--------------------------%s--------------------------\n\n", monthName[month - 1]);
            printf("Sa     Su     Mo     Tu     We     Th     Fr\n\n");
            for (weekday = 0; weekday < temp_day; weekday++)
            {
                printf("       ");
            }
            for (int day = 1; day <= dayinmonth; day++)
            {
                printf("%02d     ", day);
                weekday ++;
                if (weekday > 6)
                {
                    printf("\n\n");
                    weekday = 0;
                }
            }
}
            printf("\n");
            printf("\n");
            printf("Press a key to continue: ");
            scanf("%[^\n]%*c", user_input);
            if(strcmp(user_input, "0") == 0){
                printf("\n");
                printf("Back to menu! \n");
                printf("\n");
                delay(2);
                break;
                    }
            }


            }

}


// miladi
void G_dates(int year, int month, int day){
    int G_year, G_month, G_day;
    int leap_flag = 0;

    if (month < 10 || (month == 10 && day < 11)){
        G_year = year + 621;
    }
    else{
        G_year = year + 622;
    }

    leap_flag = leapflag(year);

    switch(month){
        case 1:     if(day < 12){G_month = 3;   G_day = day + 20;}     else{G_month = 4;    G_day = day - 11;}
        case 2:     if(day < 11){G_month = 4;   G_day = day + 20;}     else{G_month = 5;    G_day = day - 10;}
        case 3:     if(day < 11){G_month = 5;   G_day = day + 21;}     else{G_month = 6;    G_day = day - 10;}
        case 4:     if(day < 10){G_month = 6;   G_day = day + 21;}     else{G_month = 7;    G_day = day - 9;}
        case 5:     if(day < 10){G_month = 7;   G_day = day + 22;}     else{G_month = 8;    G_day = day - 9;}
        case 6:     if(day < 10){G_month = 8;   G_day = day + 22;}     else{G_month = 9;    G_day = day - 9;}
        case 7:     if(day < 9) {G_month = 9;   G_day = day + 22;}     else{G_month = 10;   G_day = day - 8;}
        case 8:     if(day < 10){G_month = 10;  G_day = day + 22;}     else{G_month = 11;   G_day = day - 9;}
        case 9:     if(day < 10){G_month = 11;  G_day = day + 21;}     else{G_month = 12;   G_day = day - 9;}
        case 10:    if(day < 11){G_month = 12;  G_day = day + 21;}     else{G_month = 1;    G_day = day - 10;}
        case 11:    if(day < 12){G_month = 1;   G_day = day + 20;}     else{G_month = 2;    G_day = day - 11;}
        case 12:    if(leap_flag){
                    if(day < 11){G_month = 2;   G_day = day + 19;}     else{G_month = 3;    G_day = day - 10;}
        }
        else{
                    if(day < 10){G_month = 2;   G_day = day + 19;}     else{G_month = 3;    G_day = day - 9;}
        }

    }
    printf("\n");
    printf("The Gregorian date is %d / %d / %d \n", G_year, G_month, G_day);
    printf("\n");

}

//qamari
void Q_dates(int year, int month, int day){
    int Q_year, Q_month, Q_day, dayNum, remaining_days;

    if (month < 7){
        dayNum = (month - 1)*31 + day;
    }
    else{
        dayNum = 6*31 + (month - 7)*30 + day;
    }

    int leap_cnt = 0;
    for(int i = 0; i < year; i++){
        if(leapflag(i) == 1){
            leap_cnt ++;
        }
    }
    dayNum += year*365 + leap_cnt;

    int Qleap_cnt = 0;
    for(int i = 0; i < Q_year; i++){
        if(Qleapflag(i) == 1){
            Qleap_cnt ++;
        }
    }

    Q_year = (dayNum-Qleap_cnt) / 354;

    remaining_days = dayNum - 354*Q_year - Qleap_cnt;

    Q_month = (remaining_days / 59) * 2;

    remaining_days = remaining_days % 59;
    if(remaining_days < 31){
        Q_month = Q_month + 1;
        Q_day = remaining_days;
    }
    else{
        Q_month = Q_month + 2;
        Q_day = remaining_days - 30;
    }

    printf("\n");
    printf("The Qamari date is %d / %d / %d \n", Q_year, Q_month, Q_day);
    printf("\n");

}

void conversion(){
    char user_input[10];
    int year, month, day;

    while (true)
    {
        system("cls");
        printf("Date Conversion Program \n");
        printf("\n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
        printf("\n");
        printf("Enter the year: ");
        scanf("%[^\n]%*c", user_input);
        if(strcmp(user_input, "0") == 0){
                printf("\n");
                printf("Back to menu! \n");
                printf("\n");
                delay(2);
                break;
        }
        year = atoi(user_input);

        printf("Enter the month: ");
        scanf("%[^\n]%*c", user_input);
        if(strcmp(user_input, "0") == 0){
                printf("\n");
                printf("Back to menu! \n");
                printf("\n");
                delay(2);
                break;
        }
        month = atoi(user_input);

        printf("Enter the day: ");
        scanf("%[^\n]%*c", user_input);
        if(strcmp(user_input, "0") == 0){
                printf("\n");
                printf("Back to menu! \n");
                printf("\n");
                delay(2);
                break;
        }
        day = atoi(user_input);

        if (year < 1206 || year > 1498 || month < 1 || month > 12 || day < 1 || day > 31){
            printf("Invalid input! \n");
            if(year < 1206 || year > 1498)
            {
                system ("cls");
                printf("ENTER YEAR:");
                scanf("%d",&year);
            }
            else
            {


            if(month < 1 && month > 12)
            {
                system ("cls");
                printf("ENTER MONTH:");
                scanf("%d",&month);

            }
            else
            {
                system("cls");
                printf("ENTER DAY:");
                scanf("%d",&day);
            }
            }
        }
        else
            {


            G_dates(year, month, day);
            Q_dates(year, month, day);
            printf("Press a key to continue: ");
            scanf("%[^\n]%*c", user_input);
            if(strcmp(user_input, "0") == 0){
                printf("\n");
                printf("Back to menu! \n");
                printf("\n");
                delay(2);
                break;
            }
        }
    }
}



void first_page(){
    system("cls");
    printf("Welcome to Taghvimak! \n");
    printf("\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
    printf("\n");
    printf("[0]QIUT\n[1]CALDNER\n[2]AGE\n[3]CONVERSTION\n\n");
    printf("Select Option: ");
}

int main(){

    char user_input[1];

    while(true){

        first_page();
        scanf("%[^\n]%*c", user_input);
        if(strcmp(user_input, "1") == 0){
            month_calendar();
            nextcalnderclander();
        }
        else if(strcmp(user_input, "2") == 0){
            age_show();
        }
        else if(strcmp(user_input, "3") == 0){
            conversion();
        }
        else if(strcmp(user_input, "0") == 0){
            printf("\n");
            printf("Bye! \n");
            printf("\n");
            delay(2);
            break;
        }
        else{
            printf("\n");
            printf("Invalid input! \n");
            printf("\n");
             delay(2);
        }
    }
    return 0;
}
