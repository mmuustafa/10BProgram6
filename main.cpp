#include "IntList.h"
#include "SortedSet.h"

#include <iostream>
using namespace std;

int main() {
   cout << "Enter a test number(1-9): ";
	int test;
	cin >> test;
	cout << endl;
   //tests constructor, destructor, push_front, pop_front, display
   if (test == 1) {
      cout << endl;
      cout << "list1 constructor called" << endl;
      IntList list1;
      cout << "pushfront 10" << endl;
      list1.push_front(10);
      cout << "pushfront 20" << endl;
      list1.push_front(20);
      cout << "pushfront 30" << endl;
      list1.push_front(30);
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
      cout << "pop" << endl;
      list1.pop_front();
      cout << "list1: " << list1 << endl;
   }
   if (test == 1) {
      cout << "list1 destructor called" << endl;
   }


   //tests push_back
   if (test == 2) {
      cout << endl;
      cout << "list2 constructor called" << endl;
      IntList list2;
      cout << "pushback 10" << endl;
      list2.push_back(10);
      cout << "pushback 20" << endl;
      list2.push_back(20);
      cout << "pushback 30" << endl;
      list2.push_back(30);
      cout << "list2: " << list2 << endl;
      cout << "pop" << endl;
      list2.pop_front();
      cout << "list2: " << list2 << endl;
      cout << "pop" << endl;
      list2.pop_front();
      cout << "list2: " << list2 << endl;
      cout << "pop" << endl;
      list2.pop_front();
      cout << "list2: " << list2 << endl;
   }
   if (test == 2) {
      cout << "list2 destructor called" << endl;
   }

   //tests selection_sort
   if (test == 3) {
      cout << endl;
      cout << "list3 constructor called" << endl;
      IntList list3;
      cout << "pushfront 30" << endl;
      list3.push_front(30);
      cout << "pushfront 10" << endl;
      list3.push_front(10);
      cout << "pushfront 20" << endl;
      list3.push_front(20);
      cout << "pushfront 32" << endl;
      list3.push_front(32);
      cout << "pushfront 17" << endl;
      list3.push_front(17);
      cout << "list3: " << list3 << endl;
      cout << "selection_sort()" << endl;
      list3.selection_sort();
      cout << "list3: " << list3 << endl;
      cout << "pop" << endl;
      list3.pop_front();
      cout << "pop" << endl;
      list3.pop_front();
      cout << "pop" << endl;
      list3.pop_front();
      cout << "list3: " << list3 << endl;
      cout << "selection_sort()" << endl;
      list3.selection_sort();
      cout << "list3: " << list3 << endl;
      cout << "pushfront 10" << endl;
      list3.push_front(10);
      cout << "selection_sort()" << endl;
      list3.selection_sort();
      cout << "list3: " << list3 << endl;
      cout << "pushfront 20" << endl;
      list3.push_front(20);
      cout << "list3: " << list3 << endl;
      cout << "selection_sort()" << endl;
      list3.selection_sort();
      cout << "list3: " << list3 << endl;
   }
   if (test == 3) {
      cout << "list3 destructor called" << endl;
   }

   //tests insert_sorted
   if (test == 4) {
      cout << endl;
      cout << "list4 constructor called" << endl;
      IntList list4;
      cout << "insert 10" << endl;
      list4.insert_ordered(10);
      cout << "list4: " << list4 << endl;
      cout << "insert 20" << endl;
      list4.insert_ordered(20);
      cout << "list4: " << list4 << endl;
      cout << "insert 30" << endl;
      list4.insert_ordered(30);
      cout << "list4: " << list4 << endl;
      cout << "insert 50" << endl;
      list4.insert_ordered(50);
      cout << "list4: " << list4 << endl;
      cout << "insert 40" << endl;
      list4.insert_ordered(40);
      cout << "list4: " << list4 << endl;
      cout << "insert 11" << endl;
      list4.insert_ordered(11);
      cout << "list4: " << list4 << endl;
      cout << "insert 10" << endl;
      list4.insert_ordered(10);
      cout << "list4: " << list4 << endl;
      cout << "insert 11" << endl;
      list4.insert_ordered(11);
      cout << "list4: " << list4 << endl;
      cout << "insert 9" << endl;
      list4.insert_ordered(9);
      cout << "list4: " << list4 << endl;
      cout << "insert 50" << endl;
      list4.insert_ordered(50);
      cout << "list4: " << list4 << endl;
      cout << "insert 51" << endl;
      list4.insert_ordered(51);
      cout << "list4: " << list4 << endl;
   }
   if (test == 4) {
      cout << "list4 destructor called" << endl;
   }
   
   //tests remove_duplicates
   if (test == 5) {
      cout << endl;
      cout << "list5 constructor called" << endl;
      IntList list5;
      cout << "pushfront 10" << endl;
      list5.push_front(10);
      cout << "pushfront 20" << endl;
      list5.push_front(20);
      cout << "pushfront 10" << endl;
      list5.push_front(10);
      cout << "pushfront 30" << endl;
      list5.push_front(30);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "pushfront 10" << endl;
      list5.push_front(10);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "pushfront 20" << endl;
      list5.push_front(20);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "pushfront 20" << endl;
      list5.push_front(20);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "pushfront 20" << endl;
      list5.push_front(20);
      cout << "pushfront 20" << endl;
      list5.push_front(20);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "pop" << endl;
      list5.pop_front();
      cout << "pop" << endl;
      list5.pop_front();
      cout << "push_front(30)" << endl;
      list5.push_front(30);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "push_front(30)" << endl;
      list5.push_front(30);
      cout << "push_front(30)" << endl;
      list5.push_front(30);
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
      cout << "pop" << endl;
      list5.pop_front();
      cout << "list5: " << list5 << endl;
      cout << "remove_duplicates()" << endl;
      list5.remove_duplicates();
      cout << "list5: " << list5 << endl;
   }
   if (test == 5) {
      cout << "list5 destructor called" << endl;
   }
   
   if (test == 6) {
      cout << endl;
      cout << "set1 constructor called" << endl;
      SortedSet set1;
      cout << "pushfront 10" << endl;
      set1.push_front(10);
      cout << "pushfront 20" << endl;
      set1.push_front(20);
      cout << "pushfront 30" << endl;
      set1.push_front(30);
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
   }
   if (test == 6) {
      cout << "set1 destructor called" << endl;
   }
   if (test == 7) {
      cout << endl;
      cout << "set1 constructor called" << endl;
      SortedSet set1;
      cout << "add 10" << endl;
      set1.add(10);
      cout << "add 20" << endl;
      set1.add(20);
      cout << "add 30" << endl;
      set1.add(30);
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
   }
   if (test == 7) {
      cout << "set1 destructor called" << endl;
   }

   if (test == 8) {
      cout << endl;
      cout << "set1 constructor called" << endl;
      SortedSet set1;
      cout << "pushback 10" << endl;
      set1.push_back(10);
      cout << "pushback 20" << endl;
      set1.push_back(20);
      cout << "pushback 30" << endl;
      set1.push_back(30);
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
      cout << "pop" << endl;
      set1.pop_front();
      cout << "set1: " << set1 << endl;
   }
   if (test == 8) {
      cout << "set1 destructor called" << endl;
   }
   if (test == 9) {
      cout << endl;
      cout << "list4 constructor called" << endl;
      SortedSet set4;
      cout << "insert 10" << endl;
      set4.insert_ordered(10);
      cout << "set4: " << set4 << endl;
      cout << "insert 20" << endl;
      set4.insert_ordered(20);
      cout << "set4: " << set4 << endl;
      cout << "insert 30" << endl;
      set4.insert_ordered(30);
      cout << "set4: " << set4 << endl;
      cout << "insert 50" << endl;
      set4.insert_ordered(50);
      cout << "set4: " << set4 << endl;
      cout << "insert 40" << endl;
      set4.insert_ordered(40);
      cout << "set4: " << set4 << endl;
      cout << "insert 11" << endl;
      set4.insert_ordered(11);
      cout << "set4: " << set4 << endl;
      cout << "insert 10" << endl;
      set4.insert_ordered(10);
      cout << "set4: " << set4 << endl;
      cout << "insert 11" << endl;
      set4.insert_ordered(11);
      cout << "set4: " << set4 << endl;
      cout << "insert 9" << endl;
      set4.insert_ordered(9);
      cout << "set4: " << set4 << endl;
      cout << "insert 50" << endl;
      set4.insert_ordered(50);
      cout << "set4: " << set4 << endl;
      cout << "insert 51" << endl;
      set4.insert_ordered(51);
      cout << "set4: " << set4 << endl;
   }
   if (test == 9) {
      cout << "list4 destructor called" << endl;
   }
   /*
   * Destructor will be tested by looking at code. There is no run-time 
   * test for it. Make sure your destructor actually deletes ALL nodes, not
   * just the head and/or tail.
   */
   
   return 0;
}
