class Solution(object):
  def isPalindrome(self, s):
    """
    :type s: str
    :rtype: bool
    """
    string = ''.join(x for x in s.lower() if x.isalnum())
    return string == string[::-1]
