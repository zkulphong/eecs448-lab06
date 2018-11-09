#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"


class Test{
        public:

        Test();

        ~Test();

        bool testWithBoolean();
        
        void executeTests();

        bool testConstructor();

        bool testSizeEmpty();

        bool testEmptyBoolean();

        bool testAddBack();

        bool testRemoveBackEmpty();

        bool testRemoveBackNotEmpty();

        bool testAddFront();

        bool testRemoveFrontEmpty();

        bool testRemoveFrontNotEmpty();

        bool testAddFrontTwice();

        bool testAddBackTwice();

        bool testAddBackThenFront();

        bool testAddFrontThenBack();

        bool testAddFrontTwiceThenRemoveFront();

        bool testAddFrontTwiceThenRemoveBack();

        bool testAddBackTwiceThenRemoveFront();

        bool testAddBackTwiceThenRemoveBack();

        bool testAddFrontTwiceSize();

        bool testAddBackTwiceSize();

        bool testAddBackAddFrontSize();

        bool testSearchValueIn();

        bool testSearchValueNotIn();

        bool testDestructor();

        bool testRemoveFront();

        bool testRemoveBack();

        private:

        LinkedListOfInts* testList;

};

#endif
