import unittest
from ch6_exercises import *

# class TestBykeProject(unittest.TestCase):

#     def test_upper(self):
#         self.assertEqual('foo'.upper(), 'FOO')

#     def test_isupper(self):
#         self.assertTrue('FOO'.isupper(), 'blaaaaah')
#         self.assertFalse('Foo'.isupper())

#     def test_split(self):
#         s = 'hello world'
#         self.assertEqual(s.split(), ['hello', 'world'])
#         # check that s.split fails when the separator is not a string
#         with self.assertRaises(TypeError):
#             s.split(2)

class TestCh6(unittest.TestCase):

    def setUp(self):
        pass
    def tearDown(self):
        pass

    def test_basic_usage_of_max_heapify(self):
        print 'printing for debuging'
        A = [16, 4, 10, 14, 7, 9, 3, 2, 8, 1]
        Aexpected = [16, 14, 10, 8, 7, 9, 3, 2, 4, 1]
        maxHeapify(A, 1)
        self.assertListEqual(A, Aexpected)

    def test_basic_usage_of_max_heapify_iterative(self):
        print 'printing for debuging'
        A = [16, 4, 10, 14, 7, 9, 3, 2, 8, 1]
        Aexpected = [16, 14, 10, 8, 7, 9, 3, 2, 4, 1]
        maxHeapifyIterative(A, 1)
        self.assertListEqual(A, Aexpected)


if __name__ == '__main__':

    suite = unittest.TestLoader().loadTestsFromTestCase(TestCh6)
    unittest.TextTestRunner(verbosity=2).run(suite)
    # unittest.main()
