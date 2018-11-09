#include "test.h"
#include "LinkedListOfInts.h"
#include <iostream>

Test::Test(){
        testList = nullptr;
}

Test::~Test(){
        delete testList;
}

void Test::executeTests(){
        std::cout << "1 = Pass, 0 = Fail\n";
        std::cout << "Test 1: Constructor - " << testConstructor() << "\n";
        std::cout << "Test 2: Destructor - " << testDestructor() << "\n";
        std::cout << "Test 3: SizeEmpty - " << testSizeEmpty() << "\n";
        std::cout << "Test 4: EmptyBoolean - " << testEmptyBoolean() << "\n";
        std::cout << "Test 5: AddBack - " << testAddBack() << "\n";
        std::cout << "Test 6: RemoveBackEmpty - " << testRemoveBackEmpty() << "\n";
        std::cout << "Test 7: RemoveBackNotEmpty - " << testRemoveBackNotEmpty() << "\n";
        std::cout << "Test 8: AddFront - " << testAddFront() << "\n";
        std::cout << "Test 9: RemoveFrontEmpty - " << testRemoveFrontEmpty() << "\n";
        std::cout << "Test 10: RemoveFrontNotEmpty - " << testRemoveFrontNotEmpty() << "\n";
        std::cout << "Test 11: AddFrontTwice - " << testAddFrontTwice() << "\n";
        std::cout << "Test 12: AddBackTwice - " << testAddBackTwice() << "\n";
        std::cout << "Test 13: AddBackThenFront - " << testAddBackThenFront() << "\n";
        std::cout << "Test 14: AddFrontThenBack - " << testAddFrontThenBack() << "\n";
        std::cout << "Test 15: AddFrontTwiceThenRemoveFront - " << testAddFrontTwiceThenRemoveFront() << "\n";
        std::cout << "Test 16: AddFrontTwiceThenRemoveBack - " << testAddFrontTwiceThenRemoveBack() << "\n";
        std::cout << "Test 17: AddBackTwiceThenRemoveFront - " << testAddBackTwiceThenRemoveFront() << "\n";
        std::cout << "Test 18: AddBackTwiceThenRemoveBack - " << testAddBackTwiceThenRemoveBack() << "\n";
        std::cout << "Test 19: AddFrontTwiceSize - " << testAddFrontTwiceSize() << "\n";
        std::cout << "Test 20: AddBackTwiceSize - " << testAddBackTwiceSize() << "\n";
        std::cout << "Test 21: AddBackAddFrontSize - " << testAddBackAddFrontSize() << "\n";
        std::cout << "Test 22: SearchValueIn - " << testSearchValueIn() << "\n";
        std::cout << "Test 23: SearchValueNotIn - " << testSearchValueNotIn() << "\n";
        std::cout << "Test 24: RemoveFront - " << testRemoveFront() << "\n";
        std::cout << "Test 25: RemoveBack - " << testRemoveBack() << "\n";
}

bool Test::testConstructor(){
        testList = new LinkedListOfInts();
        if(testList->toVector().size() == 0){
                return(true);
        }

        else{
                return(false);
        }
}


bool Test::testDestructor(){
        delete testList;

        if(testList->toVector().size() == 0){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testSizeEmpty(){
        testList = new LinkedListOfInts();
        if(testList->size() == 0){
                return(true);
        }

        else{
                return(false);
        }

}

bool Test::testEmptyBoolean(){
        testList = new LinkedListOfInts();
        if(testList->isEmpty() == true){
                return(true);
        }

        else{
                return(false);
        }

}

bool Test::testAddBack(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 7 && testVect.size() == 1){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testRemoveBackEmpty(){
        testList = new LinkedListOfInts();
        if(testList->removeBack() == false){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testRemoveBackNotEmpty(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        if(testList->removeBack() == true){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testRemoveBack(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->removeBack();
        if(testList->toVector().size() == 0){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddFront(){
        testList = new LinkedListOfInts();
        testList->addFront(7);
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 7 && testVect.size() == 1){
                return(true);
        }

        else{
                return(false);
        }

}

bool Test::testRemoveFrontEmpty(){
        testList = new LinkedListOfInts();
        if(testList->removeFront() == false){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testRemoveFrontNotEmpty(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        if(testList->removeFront() == true){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testRemoveFront(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->removeFront();
        if(testList->toVector().size() == 0){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddFrontTwice(){
        testList = new LinkedListOfInts();
        testList->addFront(7);
        testList->addFront(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 8 and testVect[1] == 7){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddBackTwice(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addBack(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 7 and testVect[1] == 8){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddBackThenFront(){
        testList = new LinkedListOfInts();
        testList->addFront(7);
        testList->addBack(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 7 and testVect[1] == 8){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddFrontThenBack(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addFront(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 8 and testVect[1] == 7){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddFrontTwiceThenRemoveFront(){
        testList = new LinkedListOfInts();
        testList->addFront(7);
        testList->addFront(8);
        testList->removeFront();
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 7 and testVect.size() == 1){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddFrontTwiceThenRemoveBack(){
        testList = new LinkedListOfInts();
        testList->addFront(7);
        testList->addFront(8);
        testList->removeBack();
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 8 and testVect.size() == 1){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddBackTwiceThenRemoveFront(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addBack(8);
        testList->removeFront();
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 8 and testVect.size() == 1){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddBackTwiceThenRemoveBack(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addBack(8);
        testList->removeBack();
        std::vector<int> testVect = testList->toVector();
        if(testVect[0] == 7 and testVect.size() == 1){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddFrontTwiceSize(){
        testList = new LinkedListOfInts();
        testList->addFront(7);
        testList->addFront(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect.size() == 2){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddBackTwiceSize(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addBack(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect.size() == 2){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testAddBackAddFrontSize(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addFront(8);
        std::vector<int> testVect = testList->toVector();
        if(testVect.size() == 2){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testSearchValueIn(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addBack(8);
        if(testList->search(7) == true){
                return(true);
        }

        else{
                return(false);
        }
}

bool Test::testSearchValueNotIn(){
        testList = new LinkedListOfInts();
        testList->addBack(7);
        testList->addBack(8);
        if(testList->search(9) == false){
                return(true);
        }

        else{
                return(false);
        }
}
