--- src/scopes/audioscopes/spectrogram.cpp.orig 2017-06-15 13:00:06 UTC
+++ src/scopes/audioscopes/spectrogram.cpp
@@ -199,7 +199,7 @@ QImage Spectrogram::renderHUD(uint)
         if (m_aGrid->isChecked()) {
             for (int frameNumber = 0; frameNumber < m_innerScopeRect.height(); frameNumber += minDistY) {
                 y = topDist + m_innerScopeRect.height() - 1 - frameNumber;
-                hideText = m_aTrackMouse->isChecked() && m_mouseWithinWidget && abs(y - mouseY) < (int)textDistY && mouseY < m_innerScopeRect.height()
+                hideText = m_aTrackMouse->isChecked() && m_mouseWithinWidget && qAbs(y - mouseY) < (int)textDistY && mouseY < m_innerScopeRect.height()
                            && mouseX < m_innerScopeRect.width() && mouseX >= 0;

                 davinci.drawLine(leftDist, y, leftDist + m_innerScopeRect.width() - 1, y);
@@ -241,7 +241,7 @@ QImage Spectrogram::renderHUD(uint)
                 x = leftDist + (m_innerScopeRect.width() - 1) * ((float)hz) / m_freqMax;

                 // Hide text if it would overlap with the text drawn at the mouse position
-                hideText = m_aTrackMouse->isChecked() && m_mouseWithinWidget && abs(x - (leftDist + mouseX + 20)) < (int) minDistX + 16
+                hideText = m_aTrackMouse->isChecked() && m_mouseWithinWidget && qAbs(x - (leftDist + mouseX + 20)) < (int) minDistX + 16
                            && mouseX < m_innerScopeRect.width() && mouseX >= 0;

                 if (x <= rightBorder) {
@@ -268,7 +268,7 @@ QImage Spectrogram::renderHUD(uint)
             }
             // Draw the line at the very right (maximum frequency)
             x = leftDist + m_innerScopeRect.width() - 1;
-            hideText = m_aTrackMouse->isChecked() && m_mouseWithinWidget && abs(x - (leftDist + mouseX + 30)) < (int) minDistX
+            hideText = m_aTrackMouse->isChecked() && m_mouseWithinWidget && qAbs(x - (leftDist + mouseX + 30)) < (int) minDistX
                        && mouseX < m_innerScopeRect.width() && mouseX >= 0;
             davinci.drawLine(x, topDist, x, topDist + m_innerScopeRect.height() + 6);
             if (!hideText) {
