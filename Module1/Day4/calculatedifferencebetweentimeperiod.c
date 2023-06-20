#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time getTime();
Time calculateDifference(Time t1, Time t2);

int main() {
    Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    startTime = getTime();

    printf("\nEnter the end time:\n");
    endTime = getTime();

    difference = calculateDifference(startTime, endTime);

    printf("\nDifference between the two time periods:\n");
    printf("Hours: %d\n", difference.hours);
    printf("Minutes: %d\n", difference.minutes);
    printf("Seconds: %d\n", difference.seconds);

    return 0;
}
//gateTime function to get input from user
Time getTime() {
    Time t;
    printf("Hours: ");
    scanf("%d", &(t.hours));
    printf("Minutes: ");
    scanf("%d", &(t.minutes));
    printf("Seconds: ");
    scanf("%d", &(t.seconds));
    return t;
}
//function to calcuate the difference between two time periods...
Time calculateDifference(Time t1, Time t2) {
    Time difference;
    int t1Seconds, t2Seconds, diffSeconds;

    t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    diffSeconds = t2Seconds - t1Seconds;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}
