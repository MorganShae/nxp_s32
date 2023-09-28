# content of test_sample.py
def func(x):
    return x + 1

def test_pass():
    assert func(9) == 10
    
def test_fail():
    assert func(3) == 5


