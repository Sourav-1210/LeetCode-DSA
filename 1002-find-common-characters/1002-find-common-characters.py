from collections import Counter

class Solution:
    def commonChars(self, words):
        count = Counter(words[0])

        for word in words[1:]:
            count &= Counter(word)

        return list(count.elements())