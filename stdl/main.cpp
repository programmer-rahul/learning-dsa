#include <bits/stdc++.h>

using namespace std;

void pairs();
void vectors();
void lists();
void deques();
void stacks();
void queues();
void priority_queues();
void sets();
void maps();

int main()
{

  // pair = pair of two values they could any type of
  // pairs();

  // vectors = dynamic array
  // vectors();

  // list
  // lists();

  // deque
  // deques();

  // stack
  // stacks();

  // queue
  // queues();

  // priority_queue
  // priority_queues();

  // set
  sets();
  // multiset => same as set just don't have uniqueness it can have same items
  // unorderedset => same as set just don't have sorted and have uniqueness

  // map
  maps();
  // multimap => same as map but can store duplicate keys
  // unorderedmap => same as map but don't have sorted and have uniqueness
}

void pairs()
{
  pair<int, string> group1 = {};

  cout << group1.second;

  group1.first = 45;
  group1.second = "pair";

  // cout << group1.first;
  // cout << group1.second;

  // =>

  pair<string, pair<int, int>> group2 = {"Group1", {5, 10}};

  cout << group2.second.first;

  pair<string, pair<string, string>> question = {
      "Who is the best Navigator",
      {"Zoro",
       "Google Maps"}};

  cout << "\n\nQuestion :- " << question.first;
  cout << "\nOptions :- \n1)" << question.second.first << "\n"
       << "2)" << question.second.second << "\n";

  // pair array
  pair<int, int> pairsArray[] = {{55, 105}, {40, 80}};

  cout << pairsArray[1].second;
}

void vectors()
{
  vector<int> vector1 = {4, 9};

  cout << vector1[1];

  vector1.push_back(100);
  cout << vector1[2];

  vector1.at(2) = 5;
  cout << vector1[2];

  vector1.emplace_back(3) = 9;
  cout << vector1[3] << endl
       << endl;

  vector<pair<int, int>> vector2 = {};

  vector2.push_back({5, 10});
  vector2.emplace_back(15, 20);

  cout << vector2[1].second;
  cout << vector2[0].first;

  vector<pair<int, int>> vector3(5); // fill it with all 0's
  vector<int> vector4(5, 20);        // fill it with all 20's and its length will be 5

  cout << vector3[0].first;
  cout << vector4[0];

  vector<pair<int, int>> vector5(vector2);

  cout << vector5[0].first;

  // vector5.back();

  cout << "\n\n\n";
  // iterators
  vector<int> vector7 = {11, 22, 33, 44};
  vector<int>::iterator it = vector7.begin(); // it will point to the first element in that vector

  cout << *(it) << endl;
  it++;
  cout << *(it) << endl;

  vector<int>::iterator it2 = vector7.end();
  cout << *it2 << endl; // you will get 0
  it2--;
  cout << *(it2) << endl; // and by this you will get last element now

  // looping through vectors

  for (vector<int>::iterator it = vector7.begin(); it != vector7.end(); it++)
  {
    cout << *(it) << ' ';
  }
  // another way
  for (auto it = vector1.begin(); it != vector1.end(); it++)
  {
    cout << *(it) << " ";
  }

  for (auto it : vector7)
  {
    cout << it << " ";
  }

  cout << "\n\n";
  // erasing
  // vector7.erase(vector7.begin() + 1);
  cout << vector7[1];

  // vector.erase(start,end)
  cout << endl;
  vector7.erase(vector7.begin(), vector7.begin() + 2);
  for (auto it : vector7)
  {
    cout << it << " ";
  }

  // insert
  vector<int> vector8(3, 50);            // {50,50,50}
  vector8.insert(vector8.begin(), 25);   // {25,50,50,50}
  vector8.insert(vector8.end(), 2, 100); // {25,50,50,50,100,100}

  cout << vector8.size();

  vector8.pop_back(); // removes last one

  cout << endl
       << vector7[0];
  cout << vector8[0];

  cout << endl;
  vector8.swap(vector7);
  cout << vector7[0];
  cout << vector8[0];

  vector7.clear(); // clear entire vector
}

void lists()
{
  list<int> list;

  list.push_back(5);   // {5}
  list.push_front(10); // {10,5}

  list.emplace_back(15);  // {10,5,15}
  list.emplace_front(25); // {10,5,15,25}
}

void deques()
{
  // exactly same as list and vector
}

void stacks()
{
  // major functions of stacks are push , pop, top

  stack<int> stack1;

  stack1.push(10); // {10}
  stack1.push(20); // {20,10}

  cout << stack1.top();

  stack1.pop();
  cout << stack1.top();

  cout << stack1.size();
  cout << stack1.empty();
}

void queues()
{
  queue<int> q;
  q.push(5);     // {5}
  q.push(10);    // {5,10}
  q.emplace(15); // {5,10,15}

  q.back() += 20;
  cout << q.back();  // 15 + 20 = 35
  cout << q.front(); // 5
  q.pop();

  // also has size,swap,empty same as stacks
}

void priority_queues()
{

  priority_queue<int> pq;

  pq.push(7);    // {7}
  pq.push(9);    // {9,7}
  pq.emplace(8); // {9,8,7}

  cout << pq.top(); // 9

  pq.pop(); // remove top one = 9
  cout << pq.top();

  // also has swap,empty,size same as stacks

  // Minimum heap = something like reverse of normal priority_queue
  priority_queue<int, vector<int>, greater<int>> pq2;

  pq2.push(5);
  pq2.push(7);

  cout << pq2.top();
}

void sets()
{
  // unique and sorted
  set<int> set1;

  set1.insert(5);  // {5}
  set1.insert(3);  // {3,5}
  set1.emplace(5); // {3,5}
  set1.emplace(7); // {3,5}

  auto it = set1.find(20);
  cout << *it;

  set1.erase(5);

  int count = set1.count(7);
  cout << count;
}

void maps()
{
  //  map is also stores keys in sorted and unique like set
  map<string, int> map1;
  map<int, pair<int, int>> map2;
  map<pair<int, int>, int> map3;

  // to add values
  map1["count1"] = 5;
  map1.insert({"count3", 10});
  map1.emplace("count2", 20);

  for (auto it : map1)
  {
    cout << "Key :- " << it.first << " Value :-" << it.second << endl;
  }

  auto it = map1.find("count2");
}
