#include <stdio.h>
#include <time.h>

typedef struct {
  int hour;
  int minute;
  int second;
} Time;

Time calculate_time_taken(Time start_time, Time end_time) {
  Time time_taken;
  time_taken.hour = end_time.hour - start_time.hour;
  time_taken.minute = end_time.minute - start_time.minute;
  time_taken.second = end_time.second - start_time.second;

  if (time_taken.second < 0) {
    time_taken.minute--;
    time_taken.second += 60;
  }

  if (time_taken.minute < 0) {
    time_taken.hour--;
    time_taken.minute += 60;
  }

  return time_taken;
}

int main() {
  Time start_time, end_time;

  
  scanf("Project start time is %dhr:%dmin:%dsec\n", &start_time.hour, &start_time.minute, &start_time.second);

  scanf("Project end time is %dhr:%dmin:%dsec", &end_time.hour, &end_time.minute, &end_time.second);

  // Calculate the time taken.
  Time time_taken = calculate_time_taken(start_time, end_time);

  // Print the time taken to the user.
  printf("Time taken by Ram - %dhr:%dmin:%dsec\n", time_taken.hour, time_taken.minute, time_taken.second);

  return 0;
}