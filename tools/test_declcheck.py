"""Regression tests for declaration recognition; run: python -B tools/test_declcheck.py."""
import unittest
import declcheck


class DeclarationRecognitionTests(unittest.TestCase):
    def declarations(self, source):
        return declcheck.names_in(source)[0]

    def test_label_before_text_call_is_not_a_declaration(self):
        source = '''LAB_003256bc:
          infoWinExpandAndSetText((const char *)(&LAB_00325978));
'''
        self.assertEqual(self.declarations(source), set())

    def test_label_and_call_on_same_line_is_not_a_declaration(self):
        self.assertEqual(self.declarations('again: showText(text);'), set())

    def test_multiline_pointer_declaration_is_still_found(self):
        source = '''extern "C" const char *
getText(
    int index
);
'''
        self.assertEqual(self.declarations(source), {'getText'})

    def test_namespaced_return_types_are_still_found(self):
        source = '''engine::Text *findText(int id);
const engine::Text &
getText(int id);
std::vector<engine::Text> listText(void);
'''
        self.assertEqual(self.declarations(source), {'findText', 'getText', 'listText'})

    def test_label_does_not_hide_following_real_declaration(self):
        source = '''again:
engine::Text *findText(int id);
'''
        self.assertEqual(self.declarations(source), {'findText'})

    def test_constructors_after_access_specifiers_remain_recognized(self):
        source = 'class Widget {\npublic:\n    Widget();\n};\n'
        declarations, types = declcheck.names_in(source)
        self.assertEqual(declarations, {'Widget'})
        self.assertEqual(types, {'Widget'})

    def test_ordinary_calls_are_not_declarations(self):
        source = '''showText(text);
return showText(text);
engine::showText(text);
'''
        self.assertEqual(self.declarations(source), set())


if __name__ == '__main__':
    unittest.main()
